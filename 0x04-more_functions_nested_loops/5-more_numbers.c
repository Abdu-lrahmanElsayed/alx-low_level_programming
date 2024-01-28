#include "main.h"

/**
 * more_numbers - prints 10 times the nums from 0 to 14 followed by a new line.
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			j = k;
			if (k > 9)
			{
				_putchar(1 + '0');
				j = k % 10;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
