#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: array.
 * @src: input string.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; *src != '\0'; src++)
		++length;
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
