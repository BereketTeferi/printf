#include "main.h"

/**
 * str_print - prints string
 *
 * @format: format of string
 * @args: va_list
 * @count: count of character printed
 * @array_ctr: index of format
 *
 * Return: number of characters printed
 */

int str_print(const char *format, va_list args, int *count, int *array_ctr)
{
	char *str;
	int i = 0;

	if (format[*array_ctr + 1] == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
			count++;
		}
		array_ctr++;
	}
	return (0);
}

/**
 * char_print - prints char
 *
 * @format: format of string
 * @args: va_list
 * @count: count of character printed
 * @array_ctr: index of format
 *
 * Return: number of characters printed
 */

int char_print(const char *format, va_list args, int *count, int *array_ctr)
{
	char c;

	if (format[*array_ctr + 1] == 'c')
	{
		c = va_arg(args, int);
		if (c == 0)
			return (-1);
		_putchar(c);
		count++;
		array_ctr++;
	}
	return (0);
}

/**
 * perc_print - prints %
 *
 * @format: format of string
 * @count: count of character printed
 * @array_ctr: index of format
 *
 * Return: number of characters printed
 */

int perc_print(const char *format, int *count, int *array_ctr)
{
	if (format[*array_ctr + 1] == '%')
	{
		_putchar('%');
		count++;
		array_ctr++;
	}
	return (0);
}
