#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to an newly allocated space
 * in memory, which contains a copy of a string given as
 * a parameter
 * @str: the string to be copied
 *
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *str2;
	int i = 0;
	int len = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		len++;
		i++;
	}

	str2 = malloc((sizeof(char) * len) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] < len; j++)
	{
		str2[j] = str[j];
	}

	str2[j] = '\0';
	return (str2);
}
