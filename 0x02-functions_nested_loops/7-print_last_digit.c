#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_last_digit - '_'
 *@n: input
 *Return: ld
 */
int print_last_digit(int n)
{
	int ld;
	/*variable to git last digit*/
	if (n < 0)
	{
		ld = -n % 10;
		_putchar("%d", ld);
		return (ld);
	}
	else
		ld = n % 10;
	_putchar("%d", ld);
	return (ld);
}
