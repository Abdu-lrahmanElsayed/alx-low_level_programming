#include<ctype.h>
#include<stdio.h>
/**
 *main - print nums
 *Return: 0
 */
int main(void)
{
	int i = 0;
	/*var*/
	while (i < 16)
	{
		putchar(tolower(i) + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
