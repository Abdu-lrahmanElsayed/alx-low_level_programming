#include<stdio.h>
#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: The table.
 */
void times_table(void)
{
	int i = 0;
	int j;

	for (j = 0; j < 10; j++)
	{
		while (i <= 9)
		{
			_putchar(i + j + '0');
			_putchar(',');
			i++;
		}
		_putchar('\n');
	}
}
