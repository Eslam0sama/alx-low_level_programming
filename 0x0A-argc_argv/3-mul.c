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
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
