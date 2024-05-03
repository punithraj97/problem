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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe6c49e03, "seq_printf" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa6893d39, "single_open" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x92997ed8, "_printk" },
	{ 0xcf2a6966, "up" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc1352057, "__register_chrdev" },
	{ 0x771e3640, "proc_create_data" },
	{ 0x5d1d6f6f, "remove_proc_entry" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xd51950b1, "seq_read" },
	{ 0x2531a760, "seq_lseek" },
	{ 0x1d509809, "single_release" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0E376077EAC132B6C026D7D");
