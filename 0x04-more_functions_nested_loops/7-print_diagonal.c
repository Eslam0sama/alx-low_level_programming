#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - A program draws a diagonal
 *@n: the number that specify length of the diagonal
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
