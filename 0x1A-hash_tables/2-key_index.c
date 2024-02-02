#include "hash_tables.h"

/**
 * key_index - Gets the index at where a key/value
 * pair should be stored in array from a hash table.
 * @key: key to get the index.
 * @size: size of the array of the hash.
 *
 * Return: index of the key.
 * Description: Uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
