#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input pointer string.
 */

void puts_half(char *str)
{
	int length, n;

	for (length = 0; *str != '\0'; str++)
		length++;
	if (length % 2 = 0)
	{
		n = length / 2;
		while (*str != '\0')
		{
			putchar(str[n] + '0');
			n++;
		}
	}
	else
	{
		n = (length - 1) / 2;
		while (*str != '\0')
		{
			putchar(str[n] + '0');
			n++;
		}
	}
}
