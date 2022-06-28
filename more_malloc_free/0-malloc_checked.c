#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates space
 *
 * @b: an integer
 * Return: pointer to allocated space
 */

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
