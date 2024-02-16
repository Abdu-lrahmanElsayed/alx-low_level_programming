#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: input string.
 * @src: input string.
 * @n: number of bytes in src.
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
