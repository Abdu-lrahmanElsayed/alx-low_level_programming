#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_last_digit - '_'
 *Return: ld
 */
int print_last_digit(int n)
{
	int ld;
	ld = n % 10;
	printf("%d", ld);
}
