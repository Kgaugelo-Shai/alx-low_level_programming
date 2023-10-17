#include "main.h"

/**
 * puts_half - print half of string
 * @str: the string to be considered
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int n;
	int length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	n = (length - 1) / 2;
	i = n + 1;

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
