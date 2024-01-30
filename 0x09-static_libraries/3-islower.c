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
		return (1);
	}
	else
		return (0);
}
