#include "main.h"
#include<stdio.h>
#include<math.h>
/**
 *is_prime_number - check the prime nums
 *@n: input
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2 || (n % 2 == 0 && n != 2))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
