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
	int length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	if (length == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
