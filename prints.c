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
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		(*count)++;
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