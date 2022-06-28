#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - allocate mem for array from @min to  @max.
 *
 * @min: range minimum
 * @max: range maximum
 * Return: pointer to allocated mem
 */

int *array_range(int min, int max)
{
	int j, range;
	int *r;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		range = ((max - min) + 1);
		r = malloc(sizeof(int) * range);
		if (r == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < range; j++)
		{
			r[j] = min;
			min++;
		}
	}
	return (r);
}

