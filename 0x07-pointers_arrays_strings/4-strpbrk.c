#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searched a string for any set of bytes
 * @s: string to consider
 * @accept: string to be compared to
 *
 * Return: pointer s that matched bytes in accept, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
