#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >=  0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
