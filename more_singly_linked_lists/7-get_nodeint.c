#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the node at index
 * @head: head of list
 * @index: specified index
 * Return: specified node, NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	if (!current)
	{
		return (NULL);
	}

	for (i = 0; current; i++)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
	}
return (current);
}
