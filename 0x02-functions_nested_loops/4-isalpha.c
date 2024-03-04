#include "main.h"

/**
 * _isalpha - A function that check if the char is alphabet.
 *
 * @c: The character to be checked.
 *
 * Return:
 * 0 if @c is an alphabet.
 * 1 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 96 && c <= 121)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
