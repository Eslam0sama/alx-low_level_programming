#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The entry point
 *
 * @argc: number of arguments in command line
 *
 * @argv: array of pointers to strings
 *
 * Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) > 0)
		{
			sum += argv[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}
