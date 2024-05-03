#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9726f80, "module_layout" },
	{ 0x35ecf72f, "kobject_put" },
	{ 0x1bcee483, "cdev_del" },
	{ 0x36c11c94, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4240b5cb, "cdev_init" },
	{ 0x4caf37f7, "param_ops_int" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0x7b48cb0e, "no_llseek" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x9332df87, "kobject_set_name" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xef27f528, "tty_devnum" },
	{ 0x50d4de4, "pv_ops" },
	{ 0x7b61a8cd, "nonseekable_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x69af1880, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x52b1e8b5, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd5f10699, "cdev_add" },
	{ 0x800473f, "__cond_resched" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69ecc112, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x8c7b87d3, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "75417D71AE5931E5767866C");
