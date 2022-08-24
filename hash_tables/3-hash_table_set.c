#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table.
 * @ht: hash table
 * @key: hash table key
 * @value: hash table value
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht,
const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = NULL;
	char *data = (char *)value;

	if (!key)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = (char *)key;
	new->value = data;
	new->next = NULL;

	if (ht->array[idx])
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	else
		ht->array[idx] = new;

return (1);
}



