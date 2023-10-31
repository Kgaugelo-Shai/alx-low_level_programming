#include "main.h"
#include "stdlib.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory
 * else null
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int s1len = 0;
	int s2len = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s1len++;
		}
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			s2len++;
		}
	}

	str = malloc((s1len + s2len) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		str[i] = s1[i];
	}
	for ( ; i < s1len + s2len; i++)
	{
		str[i] = s2[i];
	}

	str[i] = '\0';
	return (str);
}
