#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: line long.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 2; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
