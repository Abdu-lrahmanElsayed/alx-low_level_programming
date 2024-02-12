#include "main.h"

/**
 * natural_3_5 - prints the sum of all the multiples of 3 or 5 below 1024.
 */

void natural_3_5(void)
{
	int i = 0;

	while (i < 1024)
	{
		int sum = 0;

		if (i % 3 != 0 || i % 5 != 0)
			sum += i;
		else
			continue;
	}
	_putchar(sum + '0');
	_putchar('\n');
}
