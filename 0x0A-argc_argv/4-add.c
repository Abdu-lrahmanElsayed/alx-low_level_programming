#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: arguments counter.
 * @argv: array of arguments.
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc >= 2)
	{
		int i = 0;
		int add = 0;

		while (i < argc)
		{
			add = atoi(argv[i]);
			add += add;
			i++;
		}
		printf("%d\n", add);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
