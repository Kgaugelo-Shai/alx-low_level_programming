#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: points to the memory area
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
