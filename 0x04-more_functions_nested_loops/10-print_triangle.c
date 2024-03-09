#include "main.h"

/**
 * print_triangle - A function that print a triangle of a specific size.
 *
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int row, spaces, hashes;

	for (row = 0; row < size; row++)
	{
		if (size == 0 || size < 0)
		{
			_putchar('\n');
			break;
		}
		for (spaces = row; spaces < size - 1; spaces++)
		{
			_putchar(' ');
		}
		for (hashes = 0; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		if (row == size - 1)
		{
			break;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
