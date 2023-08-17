#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Describtion: A program that prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	for (char ch = 97; ch <=122 ; ch++)
	{
		_putchar(ch);
	}
}
