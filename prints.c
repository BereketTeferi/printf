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
	char *str, int i = 0;

	if (format[*array_ctr + 1] == 's')
	{
		s = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		while (str[i] != '\0')
		{
			write(1, str[i], 1);
			i++;
			*count++;
		}
		*array_ctr++;
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
		if (!c)
			return (-1);
		write(1, c, 1);
		*count++;
		*array_ctr++;
	}
	return (0);
}

/**
 * perc_print - prints %
 *
 * @format: format of string
 * @args: va_list
 * @count: count of character printed
 * @array_ctr: index of format
 *
 * Return: number of characters printed
 */

int perc_print(const char *format, va_list args, int *count, int *array_ctr)
{
	if (format[*array_ctr + 1] == '%')
	{
		write(1, '%', 1);
		*count++;
		*array_ctr++;
	}
	return (0);
}
