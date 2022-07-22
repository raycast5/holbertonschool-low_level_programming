#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t head = {0, 0, 0};
	dlistint_t tail = {6, 0, 0};
	size_t n;

	head.next = &tail;
	tail.prev = &head;
	n = print_dlistint(&head);
	printf("-> %lu elements\n", n);
	return (0);
}
