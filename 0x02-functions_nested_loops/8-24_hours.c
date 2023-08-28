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
		putchar(i + '0');
		while (j < 10)
		{
			putchar(j + '0');
			putchar(':');
			while (k < 6)
			{
				putchar(k + '0');
				while (l < 10)
				{
					putchar(l + '0');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
		putchar('\n');
	}
}
