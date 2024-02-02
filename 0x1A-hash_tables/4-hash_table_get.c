#include "hash_tables.h"

/**
 * hash_table_get - Gets the value linked with
 * a key in a hash table.
 * @ht: pointer to hash table.
 * @key: key to get the value.
 *
 * Return: key cannot be matched - NULL. Otherwise - the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	nd = ht->array[i];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;

	return ((nd == NULL) ? NULL : nd->value);
}
