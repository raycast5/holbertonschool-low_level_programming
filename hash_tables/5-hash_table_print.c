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

	if (!ht)
		exit(EXIT_FAILURE);

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
				if (current->next != NULL)
				{
					printf(", ");
					flag = 1;
				}
				else
					flag = 0;
				current = current->next;
			}
		}
		if (flag == 0 && ht->array[i + 1])
			printf(", ");
	}
	printf("}\n");
}
