#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
/*int main(void)
{
	hash_table_t *ht;
	size_t i;

	ht = hash_table_create(2048);
	if (!ht || ht->size != 2048 || !ht->array)
		return (EXIT_FAILURE);
	for (i = 0; i < 2048 && ht->array[i]; ++i);
	return (EXIT_SUCCESS);
}*/

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
