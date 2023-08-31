#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 *_strlen_recursion - prints legnth of string
 *@s: input string
 *Return: legnth
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar("%d", *s);
}
