#include<ctype.h>
#include<stdio.h>
/**
 *main - print alpha in lower and upper cases
 *Return: 0
 */
int main(void)
{
	int alpha = 'a';
	/*var then print*/
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
