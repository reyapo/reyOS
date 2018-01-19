#ifndef STREAM_H
#define STREAM_H

#include <stdio.h>

namespace rey {

  class stream {
  public:
    friend stream& operator << (stream& me, const char *a) {
      rey::printf(a);
      return me;
    }
  };

  stream stdout;

}

#endif
