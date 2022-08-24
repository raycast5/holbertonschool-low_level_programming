#include "hash_tables.h"

/**
 * hash_table_get - fetches value from hash table
 * @ht: hash table
 * @key: key to the node
 * Return: value assciated with key, NULL if not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current = NULL;

	if (!key || !ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
return (NULL);
}
