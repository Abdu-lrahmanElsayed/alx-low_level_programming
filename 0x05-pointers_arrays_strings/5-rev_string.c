#include "main.h"

/**
 * rev_string - prints a string, in reverse.
 * @s: input pointer string.
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i]; s++)
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
}
