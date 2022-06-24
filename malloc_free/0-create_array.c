#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of a certain @size composed of @c
 *
 * @size: size of array
 * @c: content of array
 * Return: NULL if size is zero, 0 if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return NULL;
	}
	else
	{
		arr = malloc(size);
		
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (0);
}
