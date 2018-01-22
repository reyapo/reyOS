#include <stdio.h>

namespace rey {
  int print(string &s) {
    for(int i = 0; i < s.length(); i++) {
      print(s.data()[i]);
    }
    return 0;
  }

  int print(char &c) {
    putchar(c);
    return 0;
  }
}
