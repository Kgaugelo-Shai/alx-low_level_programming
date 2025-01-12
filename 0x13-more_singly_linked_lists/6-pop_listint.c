#include "lists.h"

/**
 * pop_listint - removes the head of a listint_t list
 * @head: the head of the linked list
 *
 * Return: the int value of the head of the linked list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
		return (n);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;
	return (n);
}
