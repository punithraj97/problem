#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

MODULE_LICENSE("Dual BSD/GPL");
int i;
static int __init hello_init(void)
{
	for(i=0;i<10;i++)
	
	printk("5 x %i=%i\n",i,5*i);
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);
