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
	hash_node_t *new = NULL, *current = NULL;

	if (!key || !ht)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->key);
			current->key = strdup(key);
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[idx])
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	else
	{
		ht->array[idx] = new;
	}
return (1);
}
