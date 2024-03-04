#include "main.h"

/**
 * print_sign - A function that print the sign of the number.
 *
 * @n: The number to check.
 *
 * Return:
 * 0 if @n is zero.
 * 1 if @n is positive.
 * -1 if @n is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
