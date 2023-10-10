#include "main.h"

/**
 * prints_alphabet - prints the alphabet in ascending order
 * 
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
