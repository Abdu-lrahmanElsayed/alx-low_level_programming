#include<stdio.h>
#include<strlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguments counter.
 * @argv: array of arguments.
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul, x, y;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
		return (0);
	}
	else
		printf("Error");
	return (1);
}
