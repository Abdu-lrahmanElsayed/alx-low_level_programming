#include "main.h"

/**
 * *_strcat: adds array2 to array1
 * @dest: input string
 * @src: input string
 * Return: new dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
		for (j = 0; src[j]; j++)
		{
			dest[i + j] = dest[i] + src[j];
		}
	}

	return (dest);
}
