#include <stdio.h>

namespace rey {
  int print(char &c) {
    putchar(c);
    return 0;
  }

  int print(char *a, size_t len){
    for(int i = 0; i < (int)len; i++) {
      print(a[i]);
    }
    return 0;
  }

  int print(char *a) {
    return print(a, strlen(a));
  }

  int print(string &s) {
    return print(s.data());
  }

}
