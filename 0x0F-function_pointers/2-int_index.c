#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: pointer to array to be considered
 * @size: the size of the array
 * @cmp: the function to use to compare
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0, else -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) > 0)
		{
			return (index);
		}
	}

	return (-1);
}
