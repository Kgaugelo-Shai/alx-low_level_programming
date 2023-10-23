#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: string to be copied to
 * @src: string to copy
 * @n: number of bytes in memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n  && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
