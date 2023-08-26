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
	int i, j;
	*dest = dest[i];
	*src = src[j];

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] != '\0';
	return (dest);
}
