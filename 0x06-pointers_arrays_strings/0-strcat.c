#include <ctype.h>
#include "main.h"

/**
 * _strcat - A program that appends string to another
 *
 * @*dest: is a pointer to a string
 *
 * @*src: is a pointer to the appending string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		_putchar(*dest);
		*dest++;
	}
	_putchar('\0');
	_putchar(' ');
	while (*src != '\0')
	{
		_putchar(*src);
		*src++;
	}
	return (*dest);
}
