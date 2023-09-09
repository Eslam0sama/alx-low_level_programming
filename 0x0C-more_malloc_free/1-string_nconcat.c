#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A function that duplicates a string
 *
 * @ptr: is a pointer to a memory
 *
 * Return: ptr
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	int i, j, lenght_s1;
	lenght_s1 = strlen(s1);

	char *ptr = (char*)malloc(length_s1 + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght_s1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';

	return (ptr);
}
