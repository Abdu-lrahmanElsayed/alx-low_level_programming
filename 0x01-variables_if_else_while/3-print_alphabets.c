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
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
		putchar(toupper(alpha));
	}
	putchar('\n');
	return (0);
}