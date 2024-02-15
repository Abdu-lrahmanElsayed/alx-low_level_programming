#include "main.h"

/**
 * rev_string - prints a string, in reverse.
 * @s: input pointer string.
 */

void rev_string(char *s)
{
	int length, i;

	for (length = 0; *s != '\0'; s++)
		length++;
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
