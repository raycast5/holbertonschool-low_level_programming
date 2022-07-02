#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 *
 * @array: array to be iterated
 * @size: size of array
 * @action: function to execute
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
