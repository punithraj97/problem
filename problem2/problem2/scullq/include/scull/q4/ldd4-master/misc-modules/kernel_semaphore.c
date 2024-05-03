// #define MODULE
// #define __KERNEL__ not required since it will be taken care by the makefile

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/uaccess.h> //asm
#include <linux/slab.h>
#include <linux/semaphore.h> //asm
#include <linux/spinlock.h>
#include <linux/proc_fs.h> 
#include <linux/delay.h>
#include <linux/seq_file.h>


//int mdelay(unsigned long msecs);
#define msecs 60000
static int Major;
int k, k1;

struct device 
{
	char array[80];
	struct semaphore sem;
		struct semaphore sem_write;
}dev;

int multiples_of_five(struct seq_file *s, void *v)
{
	int i;

	seq_printf(s, "multiples of five\n");
	for (i = 1; i <= 10; i++)
		seq_printf(s, "5 * %d = %d\n", i, 5*i);
        return 0;
}

static int multiples_of_five2(struct inode *inode, struct file *filp)
{
	return single_open(filp, multiples_of_five, NULL);
}

struct proc_ops multiples_of_five1 = {
	//.owner   = THIS_MODULE,
	.proc_open   = multiples_of_five2,
	.proc_lseek  = seq_lseek,
	.proc_read    = seq_read,
	.proc_release = single_release,
};

static void scull_create_proc(void)
{
	proc_create_data("multiples_of_five", 0 /* default mode */,
			NULL /* parent dir */,  &multiples_of_five1,
			NULL /* client data */);
	//proc_create_data("scullseq", 0, NULL,  &scullseq_proc_ops, NULL);
}

static void scull_remove_proc(void)
{
	/* No problem if it was not registered. */
	remove_proc_entry("multiples_of_five", NULL /* parent dir */);
	//remove_proc_entry("scullseq", NULL);
}

int open(struct inode *inode, struct file *filp) //locks the semaphore
{
	if(down_interruptible(&dev.sem)) 
	{
		printk ("Received interrupt. Not holding Semaphore\n");
		return -1;
	}
	printk("Inside open entry point\n");
	//MOD_INC_USE_COUNT;
	return 0;
}

int release(struct inode *inode, struct file *filp) {
	printk ("Inside close entry point\n");
	//MOD_DEC_USE_COUNT;
	up(&dev.sem);
	return 0;
}

ssize_t read(struct file *filp, char *buff, size_t count, loff_t *offp) {
	printk("Inside read entry point:\n");
	k = copy_to_user(buff, dev.array, count);
	return 0;
}

ssize_t write(struct file *filp, const char *buff, size_t count, loff_t *offp) {	
	printk("Inside write entry point:\n");
	if(down_interruptible(&dev.sem_write)) 
	{
		printk ("Received interrupt. Not holding Semaphore\n");
		return -1;
	}



	k = copy_from_user(dev.array, buff, count); 
	msleep(60000);

	up(&dev.sem_write);
	return 0;
}

struct file_operations fops = {
	read:		read,
	write:		write,
	open: 		open,
	release:	release
};





int init_module (void) {	
	printk (" Inside kernel_semaphore\n");
	Major = register_chrdev(0, "kernel_semaphore", &fops);
        if (Major == -1) {
		printk("Major number allocation is failed\n");
		return -1;	
	}
	scull_create_proc();
	sema_init(&dev.sem,2);
	sema_init(&dev.sem_write,1);	
	printk (" The major number for your device is %d\n", Major);
	
	return 0;
}

void cleanup_module(void) {
	printk(" Inside cleanup_module\n");
	scull_remove_proc();
	unregister_chrdev(Major, "kernel_semaphore");
}
MODULE_LICENSE("GPL");	

