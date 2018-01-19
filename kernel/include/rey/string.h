#ifndef _STRING_H
#define _STRING_H

#include <sys/cdefs.h>

#include <stddef.h>

namespace rey {

int memcmp(const void*, const void*, size_t);
void* memcpy(void* __restrict, const void* __restrict, size_t);
void* memmove(void*, const void*, size_t);
void* memset(void*, int, size_t);
size_t strlen(const char*);

class string {
  private:
    // TODO make this dynamic when malloc is build
    char _data[100];
    int _len;
  public:
    string(const char* c) {
      _len = strlen(c);
      memcpy(_data, c, _len);
    };

    string() {
      _len = 0;
    }

    char* data() {
      return _data;
    };
    int length() {
      return _len;
    };

    // friend string operator +(string& me, const char *c) {
    //   memcpy(&_data[_len], c, strlen(c));
    //   _len += strlen(c);
    //   return me;
    // }

    string operator +(char c) {
      _data[_len + 1] = c;
      _len++;
      return *this;
    }

    void operator +=(char c) {
      _data[_len] = c;
      _len++;
    }
};

}

#endif
