#include <ctype.h>
#include "main.h"

/**
 * print_line - A program draws a straight line
 *@n: the number that specify length of the line
 * Return:
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
