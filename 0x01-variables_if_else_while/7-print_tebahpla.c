#include<ctype.h>
#include<stdio.h>
/**
 *main - prints in lowercase
 *Return: 0
 */
int main(void)
{
	int i = 'z';
	/*var then while loop*/
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
