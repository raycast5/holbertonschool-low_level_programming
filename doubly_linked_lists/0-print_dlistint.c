#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints contents of list of ints
 *
 * @h: list to be printed.
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	dlistint_t *current = (dlistint_t *)h;

	for (count = 0; current != NULL; count++)
	{
		if (current->n)
		{
			printf("%d\n", current->n);
		}
		current = current->next;
	}
return (count);
}
