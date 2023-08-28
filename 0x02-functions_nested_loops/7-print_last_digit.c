#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_last_digit - '_'
 *@n: input
 *Return: ld
 */
int print_last_digit(int n)
{
	int ld;
	/*variable to git last digit*/
	ld = n % 10;
	printf("%d", ld);
	return (ld);
}
