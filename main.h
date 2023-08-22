#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>

int perc_print(int *count);
int _printf(const char *format, ...);
int _putchar(char c);
int print_number(long num, int *count);
int str_print(va_list args, int *count);
int char_print(va_list args, int *count);
int int_print(va_list args, int *count);

#endif
