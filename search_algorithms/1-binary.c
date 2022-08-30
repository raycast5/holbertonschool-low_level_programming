#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * @array: pointer to first index of array
 * @size: number of values in array
 * @value: value to be found
 * Return: index where value is stored, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (m = l; m <= r; m++)
		{
			if (m != l)
				printf(", ");
			printf("%d", array[m]);
		}
		printf("\n");

		m = l + (r - l) / 2;

		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
