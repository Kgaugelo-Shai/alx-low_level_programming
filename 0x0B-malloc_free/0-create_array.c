#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates and array of chars, and
 * initializes it with a specific char
 * @size: the size of the array
 * @c: the char value to initialize the array with
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
