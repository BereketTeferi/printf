#include "main.h"

/**
 * _printf - printf clone
 *
 * format: format used for the print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0;
	char *str, c;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (count);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0' || *format == ' ')
				return (-1);
			if (*format == 'c')
			{
				c = (char)va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				*str = va_arg(args, char*);
				while (*str)
				{
					_putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar('%');
				count++;
				_putchar(*format);
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
