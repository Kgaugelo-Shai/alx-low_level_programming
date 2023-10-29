#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
