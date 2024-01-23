#include<stdio.h>
#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: The table.
 */
void times_table(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + j + '0');
			if (i < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
