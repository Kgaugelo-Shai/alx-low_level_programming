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
	int j = sizeof(s);
	char temp;

	while (j != i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
