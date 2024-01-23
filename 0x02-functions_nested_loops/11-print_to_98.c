#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * @n: input num
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
		putchar(n + '0');
	_putchar('\n');
}
