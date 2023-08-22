#include "main.h"

/**
 * bin_print - prints binary representation of unsigned int
 *
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: number
 */
int bin_print(va_list args, int *count)
{
	int binary[32];
	int i = 0, j;
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
	}
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		(*count)++;
	}
	return (0);
}

/**
 * print_base - prints number in given base
 *
 * @num: number to print
 * @base: base for conversion
 * @count: counts number of characters printed
 *
 * Return: number
 */

int print_base(unsigned int num, int base, int *count)
{
	char *digits = "0123456789abcdef";
	char buffer[32];
	int length = 0, i;

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
	}
	while (num > 0)
	{
		buffer[length++] = digits[num % base];
		num /= base;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		(*count)++;
	}
	return (0);
}

/**
 * print_base_upper - prints number in uppercase hexadecimal
 *
 * @num: number to print
 * @base: base for conversion
 * @count: counts number of characters printed
 *
 * Return: number
 */

int print_base_upper(unsigned int num, int base, int *count)
{
	char *digits = "0123456789ABCDEF";
	char buffer[32];
	int length = 0, i;

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
	}
	while (num > 0)
	{
		buffer[length++] = digits[num % base];
		num /= base;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		(*count)++;
	}
	return (0);
}
