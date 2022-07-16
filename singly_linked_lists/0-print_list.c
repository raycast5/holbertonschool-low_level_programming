#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints contents of list
 *
 * @h: list to be printed.
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;
	list_t *current = (list_t *)h;

	for (count = 0; current != NULL; count++)
	{
		if (current->str)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
	}
return (count);
}
