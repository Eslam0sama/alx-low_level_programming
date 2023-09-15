#include "function_pointers.h"

/**
 * array_iterator - prints name
 * @array: name to be printed
 * @size: the printing function pointer
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
