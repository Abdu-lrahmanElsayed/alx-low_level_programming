#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: line long.
 */

void print_line(int n)
{
	int i = 2;

	while (i <= n)
	{
			_putchar('_');
		i++;
	}
	_putchar('\n');
}
