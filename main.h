#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int str_print(va_list args, int *count);
int char_print(va_list args, int *count);
int int_print(va_list args, int *count);

#endif
