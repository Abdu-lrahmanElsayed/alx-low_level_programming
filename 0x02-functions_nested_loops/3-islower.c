#include "main.h"
#include<stdio.h>
/**
 *_islower - checks lower case chars
 *@c: input
 *Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		printf("0");
	}
	else
		printf("1");
}
