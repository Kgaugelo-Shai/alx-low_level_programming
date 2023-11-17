#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the linked list to t]be considered
 *
 * Return: size_t unsigned integer
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}

	return (element);
}
