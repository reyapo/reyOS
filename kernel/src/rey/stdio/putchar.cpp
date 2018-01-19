#include <stdio.h>

#if defined(__is_libk)
#include <kernel/tty.h>
#endif

#ifdef __is_libk
extern kernel::Terminal *tty;
#endif

namespace rey {

int putchar(int ic) {
#if defined(__is_libk)
  char c = (char)ic;
  tty->write(&c, sizeof(c));
#else
// TODO: Implement stdio and the write system call.
#endif
  return ic;
}
}
