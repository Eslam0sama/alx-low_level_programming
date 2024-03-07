#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				printf("%d, ", i * j);
			}
			else if (j == 9)
			{
				printf("%2d", i * j);
			}
			else
			{
				printf("%2d, ", i * j);
			}
		}
		printf("\n");
	}
}
