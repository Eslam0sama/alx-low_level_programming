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
	
	int lastdigit = n % 10;
	if (last_digit < 0)
	last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
