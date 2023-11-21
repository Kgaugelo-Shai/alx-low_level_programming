#include "lists.h"

/**
 * listint_t *add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: the pointer to listint_list.
 * @n: integer that holds number of elements
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	else
		new_node->next = NULL;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
