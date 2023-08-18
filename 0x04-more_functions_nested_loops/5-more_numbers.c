#include <ctype.h>
#include "main.h"

/**
 * more_numbers - A program prints numbers from 0 to 14 ten times
 *
 * Return:
 */

void more_numbers(void)

{
	int i;
	char numbers = "01234567891011121314";

	for (i = 0; i <= 9; i++)
	{
		_putchar(numbers);
		_putchar(10);
	}
	_putchar(10);
}
