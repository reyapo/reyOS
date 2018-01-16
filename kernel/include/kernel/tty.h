#ifndef _KERNEL_TTY_H
#define _KERNEL_TTY_H

#include <stddef.h>
#include <stdint.h>

namespace kernel {

class Terminal {
private:
  size_t _VGA_WIDTH = 80;
  size_t _VGA_HEIGHT = 25;
  uint16_t* const _VGA_MEMORY = (uint16_t*) 0xC00B8000;

  size_t _row;
  size_t _column;
  uint8_t _color;
  uint16_t* _buffer;

  void putentryat(unsigned char, uint8_t, size_t, size_t);
  void setcolor(uint8_t);
  void putchar(char c);

  bool esc = false;

public:
  Terminal();
  void write(const char* data, size_t size);
  void writestring(const char* data);
};

}

#endif
