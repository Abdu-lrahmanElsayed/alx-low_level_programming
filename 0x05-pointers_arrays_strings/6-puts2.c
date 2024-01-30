#include "main.h"

/**
 * puts2 - prints every other character starting with the first character.
 * @str: input pointer string
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}
