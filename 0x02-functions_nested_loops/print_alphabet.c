#include <stdio>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: void
 */
char c = 'a';
int count = 0;

void print_alphabet(void) 
{
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	
	_putchar('\n');
}
