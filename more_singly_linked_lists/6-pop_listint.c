#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head
 * @head: head of list
 * Return: data of head
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || !*head)
	{
		return (0);
	}
	else
	{
		current = *head;
		n = (*head)->n;
		*head = current->next;

		free(current);
	}
return (n);
}
