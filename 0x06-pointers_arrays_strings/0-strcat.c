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
	int count = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count - 1] = src[i];
		count++;
	}
	dest[count] = '\n';
	return (dest);
}
