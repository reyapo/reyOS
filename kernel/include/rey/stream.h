#ifndef STREAM_H
#define STREAM_H

#include <stdio.h>
#include <convert.h>

namespace rey {

  class stream {
  public:
    friend stream& operator << (stream& me, const char *a) {
      string t(a);
      print(t);
      return me;
    }

    friend stream& operator << (stream& me, string a) {
      print(a);
      return me;
    }

    friend stream& operator << (stream& me, int n) {
      return me << toString(&n);
    }

    friend stream& operator << (stream& me, char c) {
      print(c);
      return me;
    }

  };

  stream stdout;
}

#endif
