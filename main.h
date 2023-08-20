#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int str_print(const char *format, va_list args, int *count, int *array_ctr);
int char_print(const char *format, va_list args, int *count, int *array_ctr);
int perc_print(const char *format, va_list args, int *count, int *array_ctr);

#endif
