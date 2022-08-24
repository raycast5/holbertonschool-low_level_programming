#include "hash_tables.h"

/**
 * hash_table_print - Prints contents of hash table
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag;
	hash_node_t *current = NULL;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			flag = 0;
			current = ht->array[i];
			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				if (current->next)
				{
					printf(", ");
					flag = 1;
				}
				current = current->next;
			}
		}
		if (flag == 0 && ht->array[i + 1])
			printf(", ");
	}
	printf("}\n");
}
