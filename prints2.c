#include "main.h"

/**
 * u_print - prints for %u
 *
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: function call
 */

int u_print(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_number(num, count));
}

/**
 * o_print - prints for %o
 *
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: function call
 */

int o_print(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_base(num, 8, count));
}

/**
 * x_print - prints for %x
 *
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: function call
 */

int x_print(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_base(num, 16, count));
}

/**
 * X_print - prints for %X
 *
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: function call
 */

int X_print(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_base_upper(num, 16, count));
}
