#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to buffer pointed by dest.
 * @dest: array.
 * @src: input string.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
