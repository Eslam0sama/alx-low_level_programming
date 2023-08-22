#include <ctype.h>
#include "main.h"

/**
 * swap_int - A program that swap two values
 *
 * @a: is a variable
 *
 * @b: another variable
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
