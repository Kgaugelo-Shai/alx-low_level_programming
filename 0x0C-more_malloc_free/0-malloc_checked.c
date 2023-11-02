#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	else
		return (str);
}
