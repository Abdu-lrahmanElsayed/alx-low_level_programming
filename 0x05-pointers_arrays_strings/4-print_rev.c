#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input pointer string.
 */

void print_rev(char *s)
{
	int length, i;

	for (length = 0; *s != '\0'; s++)
		++length;
	i = length - 1;
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
	putchar('\n');
}
