#include "man.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0.
 */

int main(void)
{
	int n, num;
	int num0 = 0;
	int num1 = 1;
	
	for (n = 1; n <= 50; ++n)
	{
		printf("%d, ", num1);
		num = num0 + num1;
		num0 = num1;
		num1 = num;
	}
	return (0);
}
