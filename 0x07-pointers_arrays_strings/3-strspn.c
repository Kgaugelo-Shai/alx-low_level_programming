#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to consider
 * @accept: string to compare
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
			else
			{
				return (count);
			}
		}
	}

	return (count);
}
