#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list_t list
 * @head: the starting node of the list
 * @str: the character string that is to be added
 *
 * Return: the pointer to the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i, str_len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	new->len = str_len;
	new->next = *head;
	*head = new;

	return (*head);
}
