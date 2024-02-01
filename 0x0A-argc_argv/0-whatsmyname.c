#include<stdio.h>

/**
 *main - prints program name followed by a new line
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers
 *Return: success or failure
 */

int main (int argc, char *argv[])
{
	(void)argc;
	putchar("%s\n", argv[0]);

	return (0);
}
