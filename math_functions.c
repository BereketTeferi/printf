#include "main.h"

/**
 * power - calculated exponents
 *
 * @base: the base number
 * @exponent: power of the number
 *
 * Return: power of the function
 */

int power(int base, int exponent)
{
	int result = 1, i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
