#include "main.h"

/**
 * _strncat - concatenates two strings to the n number
 * @dest: first string
 * @src: second string
 * @n: the number of bytes to be copied
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
