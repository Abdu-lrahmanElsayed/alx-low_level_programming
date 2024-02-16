#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: null array.
 * @src: input string.
 * @n: number of chars that wants to be copied.
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
