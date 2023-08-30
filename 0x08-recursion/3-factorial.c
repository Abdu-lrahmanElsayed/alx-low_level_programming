#include "main.h"
#include<stdio.h>
/**
 *factorial - prints factorial
 *@n: a num
 *Return: fac
 */
int factorial(int n)
{
	int i, j;
	/*var to get fac*/
	i = 1;
	j = 1;
       	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		j = j * i;
		return (j);
	}
}
