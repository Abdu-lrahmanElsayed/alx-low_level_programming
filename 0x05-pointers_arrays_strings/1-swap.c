#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer input pointer.
 * @b: integer input pointer.
 */

void swap_int(int *a, int *b)
{
	int ab = *a;
	*a = *b;
	*b = ab;
}
