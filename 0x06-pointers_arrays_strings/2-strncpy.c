#include <ctype.h>
#include "main.h"

/**
 * _strncpy - A program that copy a string to an array
 *
 * @dest: is a pointer to an array
 *
 * @src: is a pointer to the copied string
 *
 * @n: is the number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	if (src[0] == '\0' || n > 0)
	{
		dest[0] = '\0';
		return (dest);
	}

	while (src[j] != '\0')
	{
		if (n == 0)
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
		if (n == j)
		{
			j--;
			break;
		}
		dest[i] = '\0';
	}
	return (dest);
}
