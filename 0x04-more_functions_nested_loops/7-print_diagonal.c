#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			while (j == i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
