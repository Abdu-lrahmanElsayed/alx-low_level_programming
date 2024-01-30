#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: input string.
 * Return: 0 or digits.
 */

int _atoi(char *s)
{
	int i;

	for(i = 0; s[i] != '\0'; i++)
	{
		if (s == '-')
			return (s * -1);
		else if (s >= '0' && s <= '9')
		{
			return (s);
		}
		else
			return (0);
	}
}
