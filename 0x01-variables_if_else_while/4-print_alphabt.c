#include<ctype.h>
#include<stdio.h>
/**
 *main - prents alpha
 *Return: 0
 */
int main(void)
{
	int alpha = 'a';
	/*var*/
	if (alpha < 'e')
	{
		putchar(alpha);
		alpha++;
	}
	else if (alpha < 'q')
	{
		putchar(alpha);
                alpha++;
	}
	else if (alpha <= 'z')
	{
		putchar(alpha);
                alpha++;
	}
	putchar('\n');
	return (0);
}
