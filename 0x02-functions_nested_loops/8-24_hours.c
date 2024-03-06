#include "main.h"

/**
 * jack_bauer - A function that prints every minute of day of Jack Bauer
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}

}
