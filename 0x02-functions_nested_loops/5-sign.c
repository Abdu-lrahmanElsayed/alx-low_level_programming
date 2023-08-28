#include "main.h"
#include<stdio.h>
/**
 *print_sign - prints sign for a num
 *@n: input
 *Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('0');
	}
	else
		putchar('-');
	putchar('1');
}
