#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: A program that prints numbers from 1 to 100 with conditions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
			printf("Buzz");
			break;
			}
			else
			{
			printf("Buzz");
			printf(" ");
			}
		}
		else
		{
			printf("%i", i);
			printf(" ");
		}

	}
	putchar(10);
	return (0);
}
