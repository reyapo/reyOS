#include <kernel/tty.h>
#include <stdio.h>

extern "C" void kernel_main(void) {
  kernel::tty.init();
  // libc::printf("Booting reyOS...\n"); // BROKEN
}
