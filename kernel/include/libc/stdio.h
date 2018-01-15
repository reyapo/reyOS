#ifndef _STDIO_H
#define _STDIO_H 1

#include <sys/cdefs.h>

#define EOF (-1)

namespace libc {

int printf(const char* __restrict, ...);
int putchar(int);
int puts(const char*);
}

#endif
