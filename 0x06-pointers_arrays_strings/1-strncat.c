#include <ctype.h>
#include "main.h"

/**
 * _strncat - A program that appends string to another
 *
 * @dest: is a pointer to a string
 *
 * @src: is a pointer to the appending string
 *
 * @n: is the number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		if (n == (j + 1))
			break;
	}
	return (dest);
}
