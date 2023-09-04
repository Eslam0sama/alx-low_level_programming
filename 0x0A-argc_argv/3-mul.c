#include <stdio.h>
#include <stdlib.h>

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
	(void)argc;
	int x = argv[1];
	int y = argv[2];
 	int result;
        result = x * y;
	printf("%d\n", result);
	return (0);
}
