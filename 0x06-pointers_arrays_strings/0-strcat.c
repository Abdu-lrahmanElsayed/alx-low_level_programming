#include "main.h"

/**
 * *_strcat: adds array2 to array1
 * @dest: input string
 * @src: input string
 * Return: new dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = dest[i] + src[i];
	}
	return (dest);
}
