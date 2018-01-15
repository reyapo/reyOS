#include <stdio.h>

namespace libc {

int puts(const char* string) {
  return printf("%s\n", string); }
}
