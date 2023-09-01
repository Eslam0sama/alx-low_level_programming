#include <ctype.h>
#include "main.h"

/**
 * _print_rev_recursion - A function that print the sting in reverse
 *
 * @s: is a pointer to the a string
*/
void _print_rev_recursion(char *s);
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
