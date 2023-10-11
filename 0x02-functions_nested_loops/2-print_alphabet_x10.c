#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * has no arguments
 * Return:void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 9)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		count++;
	}
}
