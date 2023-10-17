#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string that is reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	int length = 0;
	char temp;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	i = 0;
	j = length - 1;
	while (i < length / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
