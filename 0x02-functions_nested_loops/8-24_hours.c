#include "main.h"
#include<stdio.h>
/**
 *jack_bauer - prints very min and hour in the day
 *Return: time
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	/*int var for time*/
	while (i < 3)
	{
		_putchar(i + '0');
		while (j < 10)
		{
			_putchar(j + '0');
			_putchar(':');
			while (k < 6)
			{
				_putchar(k + '0');
				while (l < 10)
				{
					_putchar(l + '0');
					_putchar('\n');
					if (l > 9)
						k++;
				}
				if (k > 5)
					j++;
			}
			if (j > 9)
				i++;
		}
		l++;
	}
}
