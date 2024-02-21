#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: arguments counter.
 * @argv: array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int mul;

		mul = argv[0] * argv[1];
		printf("%d\n", mul);
	}
	else
		printf("Error");
	return (0);
}
