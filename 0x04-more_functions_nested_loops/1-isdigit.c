#include <ctype.h>
#include "main.h"

/**
 * _isdigit - A program that checks for upper case character
 *
 * @c: The character to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
