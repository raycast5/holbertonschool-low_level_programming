#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints contents of list of ints
 *
 * @h: list to be printed.
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *current = (listint_t *)h;

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
