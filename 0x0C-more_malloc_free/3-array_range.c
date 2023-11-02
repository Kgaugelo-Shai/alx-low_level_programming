#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting range
 * @max: endimg range
 *
 * Return: pointer to new array, else NULL on failure
 */

int *array_range(int min, int max)
{
	int *num;
	int space;
	int i;

	if (min > max)
		return (NULL);

	space = (sizeof(int) * (max - min)) + sizeof(int);
	num = malloc(space);

	for (i = 0; min <= max; i++)
	{
		num[i] = min;
		min++;
	}
	return (num);
}
