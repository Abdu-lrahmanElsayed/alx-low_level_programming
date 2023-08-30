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
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial (n - 1));
	}
}
