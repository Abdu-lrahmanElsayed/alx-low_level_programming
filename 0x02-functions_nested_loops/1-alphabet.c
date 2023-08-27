#include "main.h"
#include<stdio.h>
/**
 * print_alphabet - prints alphabets
 * Return: alphabets.
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
}
