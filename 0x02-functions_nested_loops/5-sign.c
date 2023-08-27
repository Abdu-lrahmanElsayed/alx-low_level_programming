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
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		printf("0");
	}
	else
		return (-1);
	printf("-");
}
