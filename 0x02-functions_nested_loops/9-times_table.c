#include<stdio.h>
#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: The table.
 */
void times_table(void)
{
	int i = 1;
	int j, _i;

	for (j = 0; j < 10; j++)
	{
		_putcahr(48);
		while (i <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_i = i * j;
			_putchar((_i / 10) + '0');
			_putchar((_i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}
