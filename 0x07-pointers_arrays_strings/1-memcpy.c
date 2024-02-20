#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: bytes.
 * @src: memory area 1.
 * @dest: memory area 2.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
