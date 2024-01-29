#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input pointer string.
 */

void _puts(char *str)
{
	char s = *str;
	char mystr[] = s;

	fprintf(stdout,"%s",mystr);
	putchar('\n');
}
