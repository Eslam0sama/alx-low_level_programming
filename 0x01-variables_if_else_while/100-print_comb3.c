#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: A program that prints the last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 48; n1 <= 56; n1++)
	{
		for (n2 = 49; n2 <= 57; n2++)
		{
			if (n1 != n2)
			{
				putchar(n1);
				putchar(n2);
				putchar(44);
				putchar(32);
			}

		}
	}
}
