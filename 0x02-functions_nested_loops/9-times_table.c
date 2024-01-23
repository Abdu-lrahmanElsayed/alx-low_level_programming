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
			_putchar(i + 48);
			_putchar(',');
			_putchar('\n');
		}
	}
}
