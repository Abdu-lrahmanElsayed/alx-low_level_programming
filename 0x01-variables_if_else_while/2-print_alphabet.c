#include<ctype.h>
#include<stdio.h>
/**
 *main - prints in lowercase
 *Return: 0
 */
int main(void)
{
	int i = 'A';
	/*var then while loop*/
	while (i <= 'Z')
	{
		i = tolower(i);
		putchar(i);
		i = i + 1;
	}
	return (0);
}
