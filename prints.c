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

	if (!str)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		(*count) += 6;
	}
	else
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
			(*count)++;
		}
	}
	return (0);
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
 * perc_print - prints percent
 *
 * @count: number of character printed
 *
 * Return: number
 */

int perc_print(int *count)
{
	_putchar('%');
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

	if (num <= INT_MAX && num >= INT_MIN)
	{
		print_number(n, count);
		(*count)++;
	}
	else
		return (-1);
	return (0);
}

/**
 * print_number - print numbers
 *
 * @n: number to be printed
 * @count: count number of characters printed
 */

void print_number(int n, int *count)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
		(*count)++;
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
	count++;
}
