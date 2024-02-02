#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates elements in a hash table.
 * @ht: pointer to hash table.
 * @key: key to add. Not an empty string
 * @value: value associated with key.
 *
 * Return: 0 on failure. Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *value_cp;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(value_cp);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = value_cp;
	nw->next = ht->array[idx];
	ht->array[idx] = nw;

	return (1);
}
