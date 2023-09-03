#include <ctype.h>
#include "main.h"

/**
 * main - The entry point
 *
 * @argc: number of arguments
 *
 * @argv: array of the arguments
 *
 * Return: Always 0 for success
*/

int main(int argc, char *argv[])
{
	while (*argv[0] != '\0')
	{
		_putchar(*argv[0]);
		*argv[0]++;
	}
	_putchar(10);
	return 0;
}
