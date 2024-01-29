#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input pointer string.
 */

void _puts(char *str)
{
	char mystr[] = str;

	fprintf(stdout,"%s",mystr);
	putchar('\n');
}
