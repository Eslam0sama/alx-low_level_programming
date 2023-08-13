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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
