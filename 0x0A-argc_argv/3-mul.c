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
	
 	int i;
        i = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", i);
	return (0);
}
