#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of doubly linked list.
 * @head: pointer to head
 * @index: index of the node
 * Return: nth node/null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp;

	len = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == len)
	return (temp);
	len++;
	temp = temp->next;
	}
	return (NULL);
}
