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

	for (ch = 48; ch <= 57 ; ch++)
	{
		putchar(ch);
		if (ch == 57)
		{
			break;
		}
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
