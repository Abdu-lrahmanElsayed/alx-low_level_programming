#include<stdio.h>
/**
 *main - print nums
 *Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	/*var*/
	while (i <= 9)
	{
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				l = k + 1;
				while (l <= 9)
				{
					putchar (i + '0');
					putchar (j + '0');
					putchar (' ');
					putchar (k + '0');
					putchar (l + '0');
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar (',');
						putchar (' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
