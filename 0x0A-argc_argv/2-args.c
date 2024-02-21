#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: arguments counter.
 * @argv: array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		_putchar(argv[i]);
		_putchar('\n');
		i++;
	}
	return (0);
}
