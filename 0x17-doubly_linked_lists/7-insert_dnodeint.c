#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * nth position
 *
 * @h: head
 * @idx: index
 * @n: value
 * Return: address new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *temp;
	unsigned int c;

	node = NULL;
	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		temp = *h;
		c = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (c == idx)
			{
				if (temp->next == NULL)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node != NULL)
					{
						node->n = n;
						node->next = temp->next;
						node->prev = temp;
						temp->next->prev = node;
						temp->next = node;
					}
				}
				break;
			}
			temp = temp->next;
			c++;
		}
	}

	return (node);
}
