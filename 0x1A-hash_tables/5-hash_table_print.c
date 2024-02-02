#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: pointer to hash table.
 *
 * Description: Key/value pairs are printed in the order.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int idx;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			nd = ht->array[idx];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
