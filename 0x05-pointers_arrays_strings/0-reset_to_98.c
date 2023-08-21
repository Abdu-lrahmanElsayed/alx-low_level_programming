#include<stdio.h>
/**
 *reset_to_98 - update the value to 98
 *Reaturn: *n;
 */
void reset_to_98(int *n);
{
	*n = 98;
	return (*n);
}
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    /*int var for n*/
    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
