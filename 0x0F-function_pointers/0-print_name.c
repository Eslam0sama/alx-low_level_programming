#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name to be printed	
 * @f: the printing function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *));
{
	if (name && f)
		f(name);
}
