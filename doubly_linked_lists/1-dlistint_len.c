#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts contents of list of ints
 *
 * @h: list to be counted.
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	dlistint_t *current = (dlistint_t *)h;

	for (count = 0; current != NULL; count++)
	{
		current = current->next;
	}
return (count);
}
