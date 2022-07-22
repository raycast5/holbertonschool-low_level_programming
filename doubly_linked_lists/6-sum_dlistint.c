#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums the contents of the list
 * @head: list to be summed
 * Return: sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	else
	{
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
return (sum);
}
