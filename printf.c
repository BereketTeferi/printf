#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format string containing directives.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, array_ctr = 0, count_ret = 0;

	va_start(args, format);
	while (*format)
	{
		if (format[array_ctr] != '\0')
		{
			_putchar(format[array_ctr]);
			count++;
		}
		else
		{
			count_ret = str_print(format, args, &count, &array_ctr);
			count_ret = char_print(format, args, &count, &array_ctr);
			count_ret = perc_print(format, &count, &array_ctr);
			if (count_ret == -1)
				return (-1);
		}
		array_ctr++;
	}
	return (count);
}
