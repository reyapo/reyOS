#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <kernel/tty.h>

#include "vga.h"


namespace kernel {

Terminal tty;

Terminal::Terminal() {//} : _VGA_MEMORY((uint16_t*)0xC00B8000) {
  _VGA_WIDTH  = 80;
  _VGA_HEIGHT = 25;
}

void Terminal::init() {
  _row = 0;
  _column = 0;
  _color = vga_entry_color(VGA_COLOR_LIGHT_GREY, VGA_COLOR_BLACK);
  _buffer = _VGA_MEMORY;

  for (size_t y = 0; y < _VGA_HEIGHT; y++) {
    for (size_t x = 0; x < _VGA_WIDTH; x++) {
      const size_t index = y * _VGA_WIDTH + x;
      _buffer[index] = vga_entry(' ', _color);
    }
  }
}

void Terminal::setcolor(uint8_t color) { _color = color; }

void Terminal::putentryat(unsigned char c, uint8_t color, size_t x, size_t y) {
  const size_t index = y * _VGA_WIDTH + x;
  _buffer[index] = vga_entry(c, color);
}

void Terminal::putchar(char c) {
  unsigned char uc = c;
  putentryat(uc, _color, _column, _row);

  if (++_column == _VGA_WIDTH) {
    _column = 0;
    if (++_row == _VGA_HEIGHT) _row = 0;
  }
}

void Terminal::write(const char* data, size_t size) {
  for (size_t i = 0; i < size; i++) {
    putchar(data[i]);
  }
}

void Terminal::writestring(const char* data) {
  write(data, libc::strlen(data));
}
}
