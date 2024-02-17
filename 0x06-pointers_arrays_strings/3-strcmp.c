#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: input string.
 * @s2: input string.
 * Return: the result of compare.
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	c = ((int)*s1 - 48) - ((int)*s2 - 48);
	return (c);

}
