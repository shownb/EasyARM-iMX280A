#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x65107f0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4d768026, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x31fa9e87, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1dc4996e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x5d56bb26, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x901d190b, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x37d0e3f1, __VMLINUX_SYMBOL_STR(of_find_node_opts_by_path) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xed2c57a1, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x3d56e28a, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf5fb58c0, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

