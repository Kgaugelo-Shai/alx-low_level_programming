#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the size of each element
 *
 * Return: pointer to array location, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	int i;
	int result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = size * nmemb;
	str = malloc(result);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < result; i++)
		str[i] = 0;

	return (str);
}
