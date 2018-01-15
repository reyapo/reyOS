#include <stdio.h>
 
#include <kernel/tty.h>
 
extern "C" {

void kernel_main(void) {
	kernel::terminal_initialize();
	libc::printf("Booting reyOS!\n");
	libc::printf("Booting reyOS!\n");
}

}
