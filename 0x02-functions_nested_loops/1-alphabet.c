#include <stdio.h>
#include "_putchar"

/**
 * main - Entry point
 *
 * Describtion: A program that prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
}
int main(void)
{
	print_alphabet();
}
