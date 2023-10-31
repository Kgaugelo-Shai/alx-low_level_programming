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
	char *str1;
	int i;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		index++;
	}

	str1 = malloc(index * sizeof(char) + 1);

	if (str1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		str1[i] = str[i];
	}
	str1[i] = '\0';
	return (str1);
}
