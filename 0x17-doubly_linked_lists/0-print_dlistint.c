#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly list
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num;

	num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
