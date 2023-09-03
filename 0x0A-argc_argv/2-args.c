#include <stdio.h>

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
	int i = argc;
	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);	
	}
	return (0);
}
