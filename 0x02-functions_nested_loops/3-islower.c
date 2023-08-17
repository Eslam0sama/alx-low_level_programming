#include <stdio.h>
#include "main.h"

/**
 * _islower - A program that checks for lower case character
 *
 * c - is an input character
 *
 * Return: 0 or 1
 */


int _islower(int c)
{
	if (islower(c))
	{
		_putchar(c + '0');
		return (1);
	}
	else
	{
		return (0);
	}
}
