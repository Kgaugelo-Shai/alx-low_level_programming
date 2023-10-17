#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string that is reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char temp;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	i = 0;
	while (i <= length / 2)
	{
		temp = s[i];
		s[i] = s[length - 1];
		s[length - 1] = temp;
		i++;
		length--;
	}
}
