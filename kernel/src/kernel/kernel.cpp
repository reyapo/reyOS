#include <kernel/tty.h>
#include <stream.h>
#include <string.h>

extern kernel::Terminal *tty;

extern "C" void kernel_main(void) {
  kernel::Terminal tty0;
  tty = &tty0;

  // escape characters prone to change. For now /1 means `change text color to 1 (BLUE)`
  rey::print << "Booting /1rey/2OS/7\n";
  rey::print << 123456 << "\n";
  rey::string test("test rey::string");
  rey::print << test << "\n";
  test += '5';
  rey::print << test;
}
