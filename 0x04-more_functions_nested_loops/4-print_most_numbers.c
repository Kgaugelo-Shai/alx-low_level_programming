#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c == 2)
		{
			c++;
		}
		else if (c == 4)
		{
			c++;
		}
		else
		{
			_putchar(c + '0');
			c++;
		}
	}
	_putchar('\n');
}
