#include <ctype.h>
#include "main.h"

/**
 * _strcat - A program that appends string to another
 *
 * @dest: is a pointer to a string
 *
 * @src: is a pointer to the appending string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		*dest++;
	}
	while (*src != '\0')
	{
		*dest++;
		*src++;
	}
	return (dest);
}
