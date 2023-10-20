#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: the string to be considered
 * Return: the string a
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
		{
			i++;
		}
		if (a[i - 1] == ' ' ||
		a[i - 1] == '\t' ||
		a[i - 1] == '\n' ||
		a[i - 1] == ',' ||
		a[i - 1] == ';' ||
		a[i - 1] == '.' ||
		a[i - 1] == '!' ||
		a[i - 1] == '?' ||
		a[i - 1] == '"' ||
		a[i - 1] == '(' ||
		a[i - 1] == ')' ||
		a[i - 1] == '{' ||
		a[i - 1] == '}')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
