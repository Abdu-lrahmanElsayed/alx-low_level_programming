#include "main.h"

/**
 * more_numbers - prints 10 times the nums from 0 to 14 followed by a new line.
 */
void more_numbers(void)
{
	int i = 0;
	int j, k;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			j = k;
			if (k > 9)
			{
				_putchar(1 + '0');
				j = k % 10;
			}
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
