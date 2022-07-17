#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds node at specefied index
 *
 * @head: address of head
 * @idx: index of new node
 * @n: int to place into new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *temp;
	unsigned int i;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	for (i = 0; current->next != NULL; i++)
	{
		if (i == idx - 1)
		{
			temp = current->next;
			current->next = new_node;
			new_node->next = temp;
			return (new_node);
		}
		current = current->next;
	}
return (new_node);
}
