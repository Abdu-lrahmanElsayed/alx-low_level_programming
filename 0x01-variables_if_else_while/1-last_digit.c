#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - prtints n
 *Return: 0
 */
int main(void)
{
	int n;
	/*int_var n*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n);
	}
	return (0);
}