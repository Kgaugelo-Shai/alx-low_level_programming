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

	while (str[i] != '\0')
	{
		len++;
	}

	str2 = malloc(sizeof(char) * (len + 1));

	for (j = 0; str[j]; j++)
	{
		str2[j] = str[j];
	}

	return (str2);
}
