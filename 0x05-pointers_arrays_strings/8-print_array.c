#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: the array that is considered
 * @n: the number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
}
