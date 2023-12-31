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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
