#include "main.h"

/**
 * more_numbers - prints 10 times the nums from 0 to 14 followed by a new line.
 *
 * Return: nums.
 */
void more_numbers(void)
{
	int nums = 0;

	for (int i; i <= 10; i++)
	{
		while (nums <= 14)
		{
			_putchar(nums + '0');
			nums++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
