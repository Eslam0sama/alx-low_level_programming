#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A program that prints alphabets in lower case
 *
 * Return: void
 */

void print_alphabet(void)

{
	char ch;

	for (ch = 97; ch <= 122 ; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
