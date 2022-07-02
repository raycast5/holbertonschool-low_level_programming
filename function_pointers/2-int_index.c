#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - iterates through array;
 *
 * @array: array to be iterated
 * @size: size of array
 * @cmp: function to execute
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
return (-1);
}
