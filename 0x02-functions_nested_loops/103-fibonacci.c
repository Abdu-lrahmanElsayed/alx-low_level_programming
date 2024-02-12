#include "main.h"

/**
 * main - finds and prints the sum of the even-valued terms in  Fibonacci sequence.
 *
 * Return: 0.
 */

int main (void)
{
	int n, num;
	int num0 = 0;
	int num1 = 1;

	for (n = 1; n <= 10; ++n)
	{
		if (num1 % 2 == 0)
			num1 += num1;
		printf("%d\n", num1);
		num = num0 + num1;
		num0 = num1;
		num1 = num;
	}
	return (0);
}
