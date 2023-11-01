#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if they are the same. -n if s1 > s2. n if s2 > s1
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
