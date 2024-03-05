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

	i = i * -1;
	last_digit = i % 10;
	printf("%d", last_digit);
	return (last_digit);
}

