#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to address of first element
 * @str: character string to be added to node
 *
 * Return: new list_t node, or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int i, str_len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	new->len = str_len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		for (i = 0; last->next != NULL; i++)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
