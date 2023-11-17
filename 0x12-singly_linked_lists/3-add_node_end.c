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
	list_t *new;
	int i, str_len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	new->len = str_len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (*head != NULL)
			*head = *head->next;
		*head->next = new;
	}
	return (new);
}
