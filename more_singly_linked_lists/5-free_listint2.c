#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		exit;
	}
	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
