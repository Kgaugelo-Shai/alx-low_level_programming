#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * of dlistint_t list
 *
 * @head: head 
 * @n: value
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *temp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	node->next = temp;

	if (temp != NULL)
		temp->prev = node;

	*head = node;

	return (node);
}
