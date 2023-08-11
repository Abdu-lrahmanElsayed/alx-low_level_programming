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
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar (i - 10 + 'a')
		}
		i++;
	}
	putchar('\n');
	return (0);
}
