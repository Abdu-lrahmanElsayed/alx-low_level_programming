#include "main.h"

/**
 * more_numbers - prints 10 times the nums from 0 to 14 followed by a new line.
 *
 * Return: nums.
 */
void more_numbers(void)
{
	int nums, num, i;

	for (i = 1; i <= 10; i++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			num = nums;
			if (nums > 9)
			{
				_putchar(1 + 48);
				num = nums % 10;
			}
		}
		_putchar(num + 48);
	}
	_putchar('\n');
}
