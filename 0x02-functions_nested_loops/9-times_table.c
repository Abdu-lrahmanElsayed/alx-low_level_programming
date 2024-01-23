#include<stdio.h>
#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: The table.
 */
void times_table(void)
{
	int i, line_num, d_i;

	for (line_num = 0; line_num < 10; line_num++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');
			d_i = i * line_num;
			if (d_i <= 9)
				_putchar(' ');
			else
				_putchar((d_i / 10) + '0');
			_putchar((d_i % 10) + '0');
		}
		_putchar('\n');
	}
}
