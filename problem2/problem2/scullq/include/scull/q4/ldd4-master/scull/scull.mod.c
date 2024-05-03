#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
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
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeffd9169, "kill_fasync" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x2531a760, "seq_lseek" },
	{ 0x771e3640, "proc_create_data" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x35789eee, "kmem_cache_alloc_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x58c36c14, "cdev_add" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3536f0ed, "fasync_helper" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x9a994cf7, "current_task" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3b5ac23c, "nonseekable_open" },
	{ 0xd51950b1, "seq_read" },
	{ 0x9c000fa7, "tty_devnum" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x27f52b92, "kobject_set_name" },
	{ 0x5d1d6f6f, "remove_proc_entry" },
	{ 0xe6c49e03, "seq_printf" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x4841ef9f, "no_llseek" },
	{ 0x1d509809, "single_release" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x4fa8f1f1, "param_ops_int" },
	{ 0xa6893d39, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4800abdd, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf301d0c, "kmalloc_caches" },
	{ 0x8bee73ff, "cdev_del" },
	{ 0x5de78793, "kobject_put" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C700099E38D65490B44694");
