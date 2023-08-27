#include "main.h"
#include<stdio.h>
/**
 *print_alphabet_x10 - prints alphabets 10 times
 *Return: alphabets
 */
void print_alphabet_x10(void)
{
	int j = 0;
	/*int var for print n times*/
	while (j < 10)
	{
		int i = 'a';
		/*int var for alphabets*/
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		j++;
	}
}
