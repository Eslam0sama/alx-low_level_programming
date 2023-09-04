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

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0 || argc > 1 || isdigit(atoi(argv[i])) != 0)
		{
			sum += atoi(argv[i]);
			if (i  == argc-1)
			{
				printf("%d\n", sum);
			}
		}
		else
		{
			if (argc == 1)
			{
				 printf("0\n");
			}
			else if (isdigit(atoi(argv[i])) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
