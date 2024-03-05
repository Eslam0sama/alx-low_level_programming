#include "main.h"

/**
 * print_last_digit - A function that print the last digit of a number.
 *
 * @i: The number to be used.
 *
 * Return: the last digit of a number.
 */

int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		i = i * -1;
	}
	last_digit = i % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}

