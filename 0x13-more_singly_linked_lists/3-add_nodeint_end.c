#include "lists.h"

/**
 * add_nodeint_end - adds an element at the end of a list
 * @head: pointer to the first element of the list
 * @n: number of elements in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *index;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		index = *head;
		while (index->next != NULL)
			index = index->next;
		index->next = new_node;
	}
	return (new_node);
}
