#include "main.h"

/**
 * reverse_array - reverses a set number of elements in an array
 * @a: the array to be considered
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
