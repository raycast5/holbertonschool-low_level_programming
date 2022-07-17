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
	listint_t *current;
	unsigned int i;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 1; i < idx && current; i++)
	{
		current = current->next;
	}
	if (!current)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current->next;
	current->next = new_node;

return (new_node);
}
