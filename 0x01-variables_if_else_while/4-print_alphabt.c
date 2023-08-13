#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: A program that prints a>z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}

	printf("\n");

	return (0);
}
