#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz.
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0.
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n < 100)
		{
			if ((n % 3 == 0) && (n % 5 == 0))
			{
				printf("FizzBuzz");
			}
			else if (n % 3 == 0)
			{
				printf("Fizz");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz");
			}
			else
				printf("%d", n);
			printf(" ");
		}
		else if (n == 100)
			printf("Buzz");
		n++;
	}
	putchar('\n');
	return (0);
}
