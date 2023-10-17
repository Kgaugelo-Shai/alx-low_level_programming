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
	int i = 0;
	int length = strlen(s);
	int j = length - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
