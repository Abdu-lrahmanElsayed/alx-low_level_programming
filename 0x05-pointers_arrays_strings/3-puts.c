#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input pointer string.
 */

void _puts(char *str)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;

	char mystr[length] = *str;

	fprintf(stdout,"%s",mystr);
	putchar('\n');
}
