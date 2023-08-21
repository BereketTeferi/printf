#include "main.h"

/**
 * str_print - prints string
 *
 * @args: va_list
 * @count: count of character printed
 *
 * Return: number
 */

int str_print(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		(*count) += 6;
		return (count);
	}
	else
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			(*count)++;
			i++;
		}
	}
	return (i);
}

/**
 * char_print - prints char
 *
 * @args: va_list
 * @count: count of character printed
 *
 * Return: number
 */

int char_print(va_list args, int *count)
{
	char c = va_arg(args, int);

	_putchar(c);
	(*count)++;
	return (1);
}

/**
 * int_print - prints integers
 *
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: number
 */

int int_print(va_list args, int *count)
{
	int num = va_arg(args, int);
	int num_length = 0, num_copy = num, i, digit;

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		(*count)++;
		num_copy = -num_copy;
	}
	while (num_copy)
	{
		num_copy /= 10;
		num_length++;
	}
	for (i = 0; i < num_length; i++)
	{
		digit = (num / power(10, num_length - i - 1)) % 10;
		_putchar('0' + digit);
		(*count)++;
	}
	return (num < 0 ? num_length + 1 : num_length);
}
