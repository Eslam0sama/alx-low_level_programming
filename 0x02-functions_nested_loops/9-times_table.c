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
			if (i * j == 0 && i == 0)
			{
				if (j == 9)
				{
					printf("%d", j * i);
					break;
				}
				printf("%d,  ", j * i);
			}

			else if (i * j == 0 && i != 0)
			{
				printf("%d", j * i);
			}

			else if (i * j < 10)
			{
				printf(",  %d", j * i);
			}
			else
			{
				printf(", %d", j * i);
			}
		}
		if (i == 9)
			break;
		printf("\n");
	}
}
