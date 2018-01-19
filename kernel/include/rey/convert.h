#ifndef CONVERT_H
#define CONVERT_H

#include <string.h>

namespace rey {

  string toString(int *n) {
    string result;

    if(*n < 0) {
      result += '-';
      *n *= -1;
    }

    while(*n > 0) {
      const char c = ((char) (*n % 10)) + 48;
      result += c;
      *n /= 10;
    }

    // TODO: reorder

    return result;
  }

}

#endif
