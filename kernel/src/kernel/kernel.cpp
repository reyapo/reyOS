#include <stdio.h>
 
#include <kernel/tty.h>
 
void kernel_main(void) {
	kernel::terminal_initialize();
	libc::printf("Hello, kernel World!\n");
}