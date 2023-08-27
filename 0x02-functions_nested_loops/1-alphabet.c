#include "main.h"
#include<stdio.h>
/**
 * print_alphabet - prints alphabets
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 'a';
	/*var then while loop*/
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
