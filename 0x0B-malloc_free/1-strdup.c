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

	newStr = malloc(sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		newStr[i] = str[i];
	}
	if (str == NULL)
		return (NULL);
	return (newStr);
}
