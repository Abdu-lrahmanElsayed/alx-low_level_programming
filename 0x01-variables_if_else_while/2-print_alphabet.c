#include<ctype.h>
#include<stdio.h>
/**
 *main - prints in lowercase
 *Return: 0
 */
int main(void)
{
	int i = 'a';
	/*var then while loop*/
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	return (0);
}
