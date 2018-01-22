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
      string t = "";
      t += ((char) (*n % 10)) + 48;
      t += result;
      result = t;

      *n /= 10;
    }

    // TODO: reorder

    return result;
  }

}

#endif
