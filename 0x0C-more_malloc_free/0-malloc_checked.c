#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - A function that duplicates a string
 *
 * @b: is a pointer to a memory
 *
 * Return: ptr
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return ptr;
	free(ptr);
}
