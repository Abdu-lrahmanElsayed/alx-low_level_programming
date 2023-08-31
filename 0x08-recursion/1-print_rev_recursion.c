#include "main.h"
#include<stdio.h>
/**
 *_print_rev_recursion - prints string
 *@s: input string
 *Return: string
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
