#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * of dlistint_t list
 *
 * @head: head
 * @n: value
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	else
	{
		*head = node;
	}

	node->prev = temp;

	return (node);
}
