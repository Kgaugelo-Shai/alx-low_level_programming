#include "main.h"

/**
 * _strncpy - copies a string to the nth byte
 * @dest: string to be copied to
 * @src: string to copy
 * @n: the number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
