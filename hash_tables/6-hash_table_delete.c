#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to be deleted.
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *current;
	hash_node_t *previous;

	if (!ht)
		exit(EXIT_FAILURE);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				previous = current;
				current = current->next;
				free(previous->key);
				free(previous->value);
				free(previous);
			}
		}
	}
	free(previous->key);
	free(previous->value);
	free(previous);
	free(ht->array);
	free(ht);
}
