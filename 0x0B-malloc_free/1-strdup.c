#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: a pointer to a string or NULL.
 */

char *_strdup(char *str)
{
	char *newStr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	newStr = malloc(sizeof(*str) + 1);
	if (newStr == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		newStr[j] = str[j];
	return (newStr);
}
