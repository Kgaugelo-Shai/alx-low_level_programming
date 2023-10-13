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

	while (count < 10)
	{
		while (c <= 14)
		{
			if (c < 10)
			{
				_putchar(c + '0');
			}
			else if ((c >= 10) && (c <= 99))
			{
				int doubles = c / 10;
				int singles = c % 10;

				_putchar(doubles + '0');
				_putchar(singles + '0');
			}
			c++;
		}
		c = 0;
		_putchar('\n');
		count++;
	}
}

