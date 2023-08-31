#include <ctype.h>
#include "main.h"

/**
 * _puts_recursion - A function that looks like puts fn
 *
 * @s: is a pointer to the a string
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		return;
}
