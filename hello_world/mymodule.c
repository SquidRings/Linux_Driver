#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("SquidRings");
MODULE_DESCRIPTION("A hello world LKM");

/**
 * @bried This function is called, when the module is loaded into the kernel
 */
static int __init ModuleInit(void){
	printk("Hello, Kernel!\n");
	return 0;
}

/**
 * @brief This functionis called, when the lmodule is remove into the kernel
 */
static void __exit ModuleExit(void){
	printk("Goodbye, Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
