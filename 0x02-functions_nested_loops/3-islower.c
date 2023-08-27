#include "main.h"
#include<stdio.h>
#include<Ctype.h>
/**
 *_islower - checks lower case chars
 *@c: input
 *Return: 0 or 1
 */
int _islower(int c)
{
	if (isupper(c))
	{
		putchar('0');
	}
	else
		putchar('1');
}
