#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to str or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		s1[i++] = s2[j];
	str = malloc(sizeof(*s1) + 1);
	if (str == 0)
		return (NULL);
	for (k = 0; k < i + j; k++)
		str[k] = s1[i];
	return (str);
}
