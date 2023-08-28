#include <ctype.h>
#include "main.h"

/**
 * _strcmp - A program that copy a string to an array
 *
 * @s1: is a pointer to an array
 *
 * @s2: is a pointer to the copied string
 *
 * Return: result
 */

char *_strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)

	{
		if (s1[i] < s2[i])
		{
			result = -1;
			break;
		}

		if (s1[i] > s2[i])
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}
	return (result);
}
