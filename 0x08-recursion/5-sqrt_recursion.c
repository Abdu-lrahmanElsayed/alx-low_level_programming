#include "main.h"
#include<stdio.h>
#include<math.h>
/**
 *_sqrt_recursion - gets squer of a num
 *@n: integer input
 *Return: square
 */
int _sqrt_recursion(int n)
{
	if (n % n != 0 || n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * _sqrt_recursion(n - 1));
	}
}
