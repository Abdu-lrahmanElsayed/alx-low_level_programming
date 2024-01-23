#include<stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: lines number
 */
void print_times_table(int n)
{
	int line_num, i, j;

	if (n <= 15 && n >= 0)
	{
		for (line_num = 0; line_num <= n; line_num++)
		{
			_putchar('0');
			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');
				j = i * line_num;
				if (j <= 9)
					_putchar(' ');
				else
				{
					_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
					if (j <= 99)
						_putchar(' ');
					else
						_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
