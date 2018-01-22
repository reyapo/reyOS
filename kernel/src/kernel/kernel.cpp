#include <kernel/tty.h>
#include <stream.h>
#include <string.h>

extern kernel::Terminal *tty;


extern "C" void kernel_main(void) {
  kernel::Terminal tty0;
  tty = &tty0;

  // escape characters prone to change. For now /1 means `change text color to 1 (BLUE)`
  rey::stdout << "Booting /1rey/2OS/7\n";

  rey::stdout << 123456 << "\n";

  rey::string test("testing rey::string");
  test += '\n';
  test = test + "this is a newline in the same string";
  rey::stdout << test << '\n';

  rey::string t2 = "abcdefg\n";
  rey::stdout << t2;
}
