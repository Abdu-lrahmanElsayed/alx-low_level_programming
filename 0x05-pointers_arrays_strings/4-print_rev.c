#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input pointer string.
 */

void print_rev(char *s)
{
	int length;

	while (s[length])
		length++;
	while (length--)
	{
		_putchar(s[length]);
	}
	putchar('\n');
}
