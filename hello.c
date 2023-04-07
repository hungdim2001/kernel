#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __int hello_start(void){
    printk(KERN_INFO "Hello, I'm here to help\n");
    return 0;
}
static void __exit hello_end(void){
    printk(KERN_INFO "Goodbye, I hople I was helpful\n");
}
module_init(hello_start);
module_exit(hello_end);