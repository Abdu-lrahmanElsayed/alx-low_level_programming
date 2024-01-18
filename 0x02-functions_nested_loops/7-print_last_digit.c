#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_last_digit - '_'
 *@n: input
 *Return: id
 */
int print_last_digit(int n)
{
	int id;

	if (n < 0)
	{
		id = -1 * (n % 10);
		_putchar(id + '0');
		return (id);
	}
	else
	{
		id = n % 10;
		_putchar(id + '0');
		return (id);
	}
}
