#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: size of array.
 *
 * Return: on error - NULL.
 *         Otherwise - pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst;
	unsigned long int idx;

	hst = malloc(sizeof(hash_table_t));
	if (hst == NULL)
		return (NULL);

	hst->size = size;
	hst->array = malloc(sizeof(hash_node_t *) * size);
	if (hst->array == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
		hst->array[idx] = NULL;

	return (hst);
}
