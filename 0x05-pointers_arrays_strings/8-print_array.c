#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: input pointer for array.
 * @n: number of elements.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
}
