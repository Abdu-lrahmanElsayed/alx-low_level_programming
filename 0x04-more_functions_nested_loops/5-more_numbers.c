#include "main.h"

/**
 * more_numbers - prints 10 times the nums from 0 to 14.
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
			k = j;
			if (j > 9)
                        {
				putchar(1 + '0');
				k = j % 10;
                        }
			putchar(k + '0');
                        j++;
		}
		putchar('\n');
		i++;
	}
}
