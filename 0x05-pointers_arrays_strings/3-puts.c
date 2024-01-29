#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input pointer string.
 */

void _puts(char *str)
{
	int length;

	for (length = 0; *str != '\0'; str++)
		++length;

	char mystr[length];

	mystr = *str;
	fprintf(stdout,"%s",mystr);
	putchar('\n');
}
