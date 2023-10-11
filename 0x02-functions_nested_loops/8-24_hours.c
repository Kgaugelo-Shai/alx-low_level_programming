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
		count++;
		while (h2 <= 9)
		{
			while (m1 <= 6)
			{
				while (m2 <= 9)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
					m2++;
				}
				m2 = 0;
				m1++;
			}
			m1 = 0;
			h2++;
		}
		h2 = 0;
		h1++;
	}
}


