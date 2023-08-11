#include<ctype.h>
#include<stdio.h>
/**
 *main - prints in lowercase
 *Return: 0
 */
int main(void)
{
	int i = 'A';
	while (i <= 'Z')
	{
		i = tolower(i);
		putchar(i);
		i++;
	}
	return (0);
}
