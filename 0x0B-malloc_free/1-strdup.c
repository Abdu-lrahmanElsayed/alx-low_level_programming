#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: a pointer to a string or NULL.
 */

char *_strdup(char *str)
{
	char *newStr;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		newStr = malloc(sizeof(str) * i);
		newStr[j++] = str[i];
	}
	return (newStr);
}
