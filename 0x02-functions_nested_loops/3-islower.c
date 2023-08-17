#include <ctype.h>
#include "main.h"

/**
 * _islower - A program that checks for lower case character
 *
 * @c: The character to be checked
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
