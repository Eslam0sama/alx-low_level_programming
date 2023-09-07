#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that duplicates a string
 *
 * @str: is a pointer to the a string
 *
 * Return: x
*/
char *_strdup(char *str)
{
	int i;
	char *x;

	if (str == NULL)
		return (NULL);

	x = malloc((strlen(str) + 1) * sizeof(char));

	if (x == NULL)
		return (NULL);

	for (i = 0; i < (int)(strlen(str) + 1); i++)
	{
		x[i] = str[i];
	}

	return (x);
}
