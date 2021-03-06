#ifndef _STDIO_H
#define _STDIO_H 1

#include <sys/cdefs.h>
#include <string.h>

#define EOF (-1)

namespace rey {

int print(string&);
int print(char&);
int putchar(int);
int puts(const char*);

}

#endif
