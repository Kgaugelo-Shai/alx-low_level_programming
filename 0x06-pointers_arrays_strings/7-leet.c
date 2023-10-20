#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: the string to be considered
 * Return: a string a
 */
char *leet(char *a)
{
	int i;
	int j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == str1[j])
			{
				a[i] = str2[j];
			}
		}
	}
	return (a);
}
