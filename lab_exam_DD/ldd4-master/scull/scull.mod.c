#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

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
	{ 0x24c2ebb6, "kill_fasync" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x72445124, "pcpu_hot" },
	{ 0xf76784d5, "seq_lseek" },
	{ 0x5c72099, "proc_create_data" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xeab4ef9c, "cdev_add" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1fbda67f, "fasync_helper" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x611cc867, "nonseekable_open" },
	{ 0xdae0ef21, "seq_read" },
	{ 0xcf6379ae, "tty_devnum" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaba95ccf, "kobject_set_name" },
	{ 0xd7791eaf, "remove_proc_entry" },
	{ 0x73f5cdba, "seq_printf" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0xd2a93da3, "single_release" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x75c9e5c2, "kmalloc_trace" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x94aecc90, "param_ops_int" },
	{ 0x49c1677a, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x14bd5970, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x55f9eee9, "kmalloc_caches" },
	{ 0xea81176e, "cdev_del" },
	{ 0x1c0dd58c, "kobject_put" },
	{ 0x6ab589bc, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A47C475CB076E8D4232C23B");
