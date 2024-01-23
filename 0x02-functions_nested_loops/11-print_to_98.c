#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * @n: input num
 */
void print_to_98(int n)
{
	int i = n;
	if (n < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			_putchar(',');
			_putchar(' ');
			i++;
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			_putchar(',');
			_putchar(' ');
			i--;
		}
		_putchar('\n');
	}
	else
	{
		printf("%d", n);
		_putchar('\n');
	}
}
