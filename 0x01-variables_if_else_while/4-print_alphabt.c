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
	while ('e' > alpha > 'e' && 'q' > alpha > 'q' && alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
