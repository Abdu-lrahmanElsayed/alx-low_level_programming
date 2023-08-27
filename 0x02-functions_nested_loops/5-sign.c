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
		printf("%c", '+');
		return (1);
	}
	else if (n == 0)
	{
		printf("%c", '0');
		return (0);
	}
	else
		printf("%c", '-');
	return (-1);
}
