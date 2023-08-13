#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: A program that prints numbers with base10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		putchar(x);
	}

	printf("\n");

	return (0);
}
