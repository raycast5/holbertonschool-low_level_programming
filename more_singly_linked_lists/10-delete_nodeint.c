#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specefied index
 *
 * @head: address of head
 * @index: index of node
 * Return: address of the new element, or NULL if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
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
	for (i = 1; i < index && current; i++)
	{
		temp = current;
		current = current->next;
	}
	if (current)
	{
		temp->next = current->next;
		free(current);
		return (1);
	}
return (-1);
}
