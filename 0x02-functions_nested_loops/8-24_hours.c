#include "main.h"
#include<stdio.h>
/**
 *jack_bauer - prints very min and hour in the day
 *Return: time
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((r / 10) + 48);
			_putchar((r % 10) + 48);
			_putchar(":");
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
