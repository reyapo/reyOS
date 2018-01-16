#ifndef STREAM_H
#define STREAM_H

#include <stdio.h>

namespace libc {

  class stream {
  public:
    friend stream& operator << (stream& me, const char *a) {
      libc::printf(a);
      return me;
    }
  };

  stream stdout;

}

#endif
