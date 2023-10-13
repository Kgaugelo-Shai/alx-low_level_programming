#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 -14
 *
 * Return: void
 */
void more_numbers(void)
{
	int c = 0;
	int count = 0;
	int num;

	while (count < 10)
	{
		while (c <= 14)
		{
			num = c;
			if (c > 9)
			{
				_putchar(1 + '0');
				num = c % 10;
			}
			_putchar(num + '0');
			c++;
		}
		c = 0;
		_putchar('\n');
		count++;
	}
}
