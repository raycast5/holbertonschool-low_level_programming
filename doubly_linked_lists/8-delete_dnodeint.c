#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specefied index
 *
 * @head: address of head
 * @index: index of node
 * Return: address of the new element, or NULL if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (!*head || !head)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	for (i = 0; i < index && current; i++)
	{
		temp = current;
		current = current->next;
	}
	if (current)
	{
		temp->next = current->next;
		temp->prev = current->prev;
		free(current);
		return (1);
	}
return (-1);
}
