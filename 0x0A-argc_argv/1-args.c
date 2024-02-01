#include<stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: count of the arguments supplied to the program.
 * @argv: array.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	for (i = 0; i < argc; i++)
		printf("%d\n", i - 1);
	return (0);
}
