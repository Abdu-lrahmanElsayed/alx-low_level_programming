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
	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	putchar('\n');
}
