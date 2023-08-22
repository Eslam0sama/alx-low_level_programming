#include <ctype.h>
#include "main.h"

/**
 * reset_to_98 - A program reset a value to 98
 *
 * @n: variable
 *
 * @*n: pointer
 */

void reset_to_98(int *n)
{
	int *n = &n;
	*n = 98;
}
