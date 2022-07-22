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
	dlistint_t *temp;

	if (!*head || !head)
	{
		return (-1);
	}
	temp = *head;
	for (; index != 0; index--)
	{
		temp = temp->next;
		if (!temp)
			return -1;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	}
	free(temp);
return (1);
}
