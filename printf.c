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
	int count = 0, array_ctr = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format && format[array_ctr] != '\0')
	{
		if (format[array_ctr] != '%')
		{
			_putchar(format[array_ctr]);
			count++;
		}
		else if (format[array_ctr] == '%')
		{
			array_ctr++;
			if (format[array_ctr] == 's')
				str_print(args, &count);
			else if (format[array_ctr] == 'c')
				char_print(args, &count);
			else if (format[array_ctr] == 'd' || format[array_ctr] == 'i')
				int_print(args, &count);
			else if (format[array_ctr] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[array_ctr] == ' ' || format[array_ctr] == '\0')
				return (-1);
		}
		array_ctr++;
	}
	va_end(args);
	return (count);
}
