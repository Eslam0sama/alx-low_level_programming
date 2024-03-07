#include "main.h"

/**
* print_to_98 - A function that print numbers from n to 98.
*
* @n: The number to start from.
*/

void print_to_98(int n)
{
	while (n <= 98 || n >= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		else if (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n++;
		}
		else
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}
