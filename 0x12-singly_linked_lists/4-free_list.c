#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	int i;
	list_t *buff;

	if (head == NULL)
		return;
	for (i = 0; head->next != NULL; i++)
	{
		buff = head->next;
		free(head->str);
		free(head);
		head = buff;
	}
	free(head->str);
	free(head);

}
