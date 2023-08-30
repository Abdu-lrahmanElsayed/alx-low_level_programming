#include "main.h"
#include<stdio.h>
/**
 *factorial - prints factorial
 *@n: a num
 *Return: fac
 */
int factorial(int n)
{
       	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	int j = 1;
	for (int i = 1; i <= n; i++)
	{
		j = j * i;
	}
	return (j);
}
