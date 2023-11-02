#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of memeory to allocate
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lens1++;

	str = malloc((n + lens1) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s2[i] != '\0'; i++)
		lens2++;
	if (n >= lens2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			str[lens1 + i] = s2[i];
		str[lens1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; i < n; i++)
			str[lens1 + i] = s2[i];
		str[lens1 + i] = '\0';
	}

	return (str);
}

