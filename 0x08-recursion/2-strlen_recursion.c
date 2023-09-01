#include <ctype.h>
#include "main.h"

/**
 * _strlen_recursion - A function that counts string chars
 *
 * @s: is a pointer to the a string
*/
int _strlen_recursion(char *s)
{
	static int count = 0;
	if (*s != 0)
	{
		count++;
		_strlen_recursion(s+1);
	}
	return count;
}
