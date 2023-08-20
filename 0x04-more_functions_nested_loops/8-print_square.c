#include <ctype.h>
#include "main.h"

/**
 * print_square - A program draws a square
 *@size: the number that specify length of the diagonal
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
