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
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
