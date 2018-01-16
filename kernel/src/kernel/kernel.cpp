#include <kernel/tty.h>
#include <stream.h>

extern kernel::Terminal *tty;

extern "C" void kernel_main(void) {
  kernel::Terminal tty0;
  tty = &tty0;

  libc::stdout << "Booting /1rey/2OS/7" << "\n";
}
