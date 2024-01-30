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
		if (s[i] < '48' || s[i] > '57')
			return (0);
		else if (s[i] == '43' || s[i] == '45' || s[i] >= '48' || s[i] <= '57')
		{
			return (s);
		}
	}
}
