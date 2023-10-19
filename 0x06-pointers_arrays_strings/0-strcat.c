#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: char * array to pointer dest.
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0;
	int count2 = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		count1++;
	}

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		count2++;
	}

	for (i = 0 ; i <= count2 ; i++)
	{
		dest[count1 + i] = src[i];
	}

	return (dest);
}
