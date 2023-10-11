#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;
	int count = 1;

	while (count <= 1440)
	{
		if (h1 <= 2)
		{
			_putchar(h1 + '0');
		}
		if (h2 <= 9)
		{
			_putchar(h2 + '0');
		}
		else
		{
			h2 = 0;
			_putchar(h2 + '0');
			h1++;
		}
		_putchar(':');
		if (m1 <= 9)
		{
			_putchar(m1 + '0');
		}
		else
		{
			m1 = 0;
			_putchar(m1 + '0');
			h2++;
		}
		if (m2 <= 9)
		{
			_putchar(m2 + '0');
			m2++;
		}
		else
		{
			m2 = 0;
			_putchar(m2 + '0');
			m2++;
			m1++;
		}
		_putchar('\n');
		count++;
	}
}
