#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts nodes of list of ints
 *
 * @h: list to be counted.
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	listint_t *current = (listint_t *)h;

	for (count = 0; current != NULL; count++)
	{
		current = current->next;
	}
return (count);
}
