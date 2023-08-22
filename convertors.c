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

/**
 * S_print - prints string with non-printable characters.
 *
 * @args: va_list of arguments.
 * @count: Pointer to the count of characters printed.
 *
 * Return: 0 on success, -1 on error.
 */
int S_print(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		return (-1);

	while (str[i] != '\0')
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
				_putchar('0');
			x_print_single(str[i], count);
		}
		else
		{
			_putchar(str[i]);
			(*count)++;
		}
		i++;
	}
	return (0);
}


/**
 * x_print_single - prints a single character's
 * ASCII value in uppercase hexadecimal format.
 *
 * @n: ASCII value of the character.
 * @count: Pointer to the count of characters printed.
 */
void x_print_single(int n, int *count)
{
	char hex_digits[] = "0123456789ABCDEF";

	_putchar(hex_digits[(n >> 4) & 0xF]);
	_putchar(hex_digits[n & 0xF]);
	(*count) += 2;
}

