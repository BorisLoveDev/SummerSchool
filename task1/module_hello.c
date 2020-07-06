#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR ("Harchenko Boris");
MODULE_DESCRIPTION("My first module for Linux");

int init_module(void){
	printk(KERN_INFO "Hello, World!\n");

	return 0;
}

void cleanup_module(void){
	printk(KERN_INFO "Goodbye, World!\n");
}