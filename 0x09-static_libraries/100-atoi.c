#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: input string.
 * Return: 0 or digits.
 */

int _atoi(char *s)
{
	int i;
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	i = num * sign;
	return (i);
}
