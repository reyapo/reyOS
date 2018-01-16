#include <kernel/tty.h>
#include <stdio.h>

extern kernel::Terminal *tty;

extern "C" void kernel_main(void) {
  kernel::Terminal tty0;
  tty = &tty0;

  libc::printf("Booting reyOS....\n");
  libc::printf("Booting reyOS....\n");
}
