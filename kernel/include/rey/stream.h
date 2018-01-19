#ifndef STREAM_H
#define STREAM_H

#include <stdio.h>
#include <convert.h>

namespace rey {

  class stream {
  public:
    friend stream& operator << (stream& me, const char *a) {
      rey::printf(a);
      return me;
    }

    friend stream& operator << (stream& me, string a) {
      rey::printf(a.data());
      return me;
    }

    friend stream& operator << (stream& me, int n) {
      return me << toString(&n);
    }
  };

  stream print;

}

#endif
