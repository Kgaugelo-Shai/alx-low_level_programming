#include "main.h"
#include "stdlib.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory else null
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int lens1 = 0;
	int lens2 = 0;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		lens1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		lens2++;
	}
	s3 = malloc(sizeof(char) * (lens1 + lens2) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < lens2; i++)
	{
		s3[lens1 + i] = s2[i];
	}
	s3[lens1 + i] = '\0';
	return (s3);
}
