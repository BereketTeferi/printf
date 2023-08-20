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
	int count = 0, array_ctr = 0, result = 0;

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
			result = str_print(format, args, &count, &array_ctr);
			result = char_print(format, args, &count, &array_ctr);
			result = perc_print(format, &count, &array_ctr);
			if (result == -1)
				return (-1);
		}
		array_ctr++;
	}
	va_end(args);
	return (count);
}
