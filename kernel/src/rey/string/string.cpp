#include <string.h>

namespace rey {

  string::string(const char *data) {
    memcpy(_data, data, strlen(data));
  }

  char* string::data() {
    return _data;
  }

  int string::length() {
    return strlen(_data);
  }
}
