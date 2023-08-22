#include <ctype.h>
#include "main.h"

/**
 * swap_int - A program reset a value to 98
 *
 * @a: pointer
 *
 * @b: another pointer
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
