#include "main.h"

/**
 * _strcpy - copies string
 * @dest: the buffer to be copied to
 * @src: the string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
