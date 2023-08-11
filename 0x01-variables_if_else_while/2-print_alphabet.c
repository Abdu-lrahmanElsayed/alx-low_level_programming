#include<ctype.h>
#include<stdio.h>
/**
 *main - prints in lowercase
 *Return: 0
 */
int main(void)
{
	for (int i = 'A'; i <= 'z'; i++)
	{
		putchar(tolower(i));
	}
	return (0);
}
