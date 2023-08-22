#include "main.h"

/**
 * handle_specifier - Handles a single format specifier.
 *
 * @specifier: The format specifier character.
 * @args: va_list of arguments.
 * @count: Pointer to the count of characters printed.
 *
 * Return: 0 on success, -1 on error.
 */
int handle_specifier(char specifier, va_list args, int *count)
{
	switch (specifier)
	{
		case 's':
			return (str_print(args, count));
		case 'c':
			return (char_print(args, count));
		case 'd':
		case 'i':
			return (int_print(args, count));
		case 'b':
			return (bin_print(args, count));
		case '%':
			return (perc_print(count));
		case 'u':
			return (u_print(args, count));
		case 'o':
			return (o_print(args, count));
		case 'x':
			return (x_print(args, count));
		case 'X':
			return (X_print(args, count));
		case 'S':
			return (S_print(args, count));
		default:
			_putchar('%');
			_putchar(specifier);
			(*count) += 2;
			return (0);
	}
}

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
	if (!format)
		return (-1);
	while (format[array_ctr])
	{
		if (format[array_ctr] != '%')
		{
			_putchar(format[array_ctr]);
			count++;
		}
		else if (format[array_ctr] == '%')
		{
			array_ctr++;
			if (format[array_ctr] == ' ' || format[array_ctr] == '\0')
				return (-1);
			if (handle_specifier(format[array_ctr], args, &count) == -1)
				return (-1);
		}
		array_ctr++;
	}
	va_end(args);
	return (count);
}
