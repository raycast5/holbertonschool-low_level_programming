#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len -counts nodes in list
 *
 * @h: list to be printed.
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;
	list_t *current = (list_t *)h;

	for (count = 0; current != NULL; count++)
	{
		current = current->next;
	}
return (count);
}
