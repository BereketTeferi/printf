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
		print_number(num, count);
	}
	else
		return (-1);
	return (0);
}

/**
 * print_number - number printer
 *
 * @num: number passed to be printed
 * @count: number of characters printed
 *
 * Return: number
 */
int print_number(long num, int *count)
{
	int *numbr, counter = 0, i;
	long n;

	if (num < 0)
	{
		_putchar('-');
		(*count)++;
		num = -num;
	}
	n = num;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	n = num;
	numbr = malloc(sizeof(int) * counter);
	if (numbr == NULL)
	{
		(*count)++;
		return (-1);
	}
	for (i = 0; i < counter; i++)
	{
		numbr[i] = n % 10;
		n /= 10;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(numbr[i] + '0');
		(*count)++;
	}
	free(numbr);
	return (0);
}
