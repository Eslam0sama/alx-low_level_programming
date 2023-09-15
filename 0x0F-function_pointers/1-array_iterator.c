#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name to be printed	
 * @f: the printing function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
