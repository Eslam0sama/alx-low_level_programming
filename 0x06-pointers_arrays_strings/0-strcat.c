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
	}
	return (dest);
}
