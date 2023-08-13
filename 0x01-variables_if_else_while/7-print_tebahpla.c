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

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
