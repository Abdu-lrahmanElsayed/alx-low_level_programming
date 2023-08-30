#include "main.h"
#include<stdio.h>
/**
 *_puts_recursion - prints string
 *@s: input string
 *Return: idk
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		printf("%c\n", *s);
		s++;
	}
}
