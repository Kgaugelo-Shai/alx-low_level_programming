#include "lists.h"

/**
 * sum_dlistint - returns the sum of doubly linked list data
 *
 * @head: head
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
