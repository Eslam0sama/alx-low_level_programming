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
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
 	int result;
        result = x * y;
	if (argc == 3)
	{	
	printf("%d\n", result);
	}
	else 
	{
		printf("Error");
		return (1);
	}
	return (0);
}
