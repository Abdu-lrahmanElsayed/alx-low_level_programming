#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input pointer string.
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		if (*s == '\0')
		{
			--s;
		}
		putchar(*s);
		s++;

	}
	putchar('\n');
}
