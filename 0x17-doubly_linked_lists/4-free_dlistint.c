#include "lists.h"

/**
 * free_dlistint - frees a doubly list.
 * @head: pointer to head
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
