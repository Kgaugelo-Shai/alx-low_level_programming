#include "lists.h"

/**
 * print_list - this function prints all the elements
 * of a list_t list
 * @h: the list_t object to be examined
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		element++;
	}
	return (element);
}
