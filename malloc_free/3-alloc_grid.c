#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create array of a certain @width and @height.
 *
 * @width: width of array
 * @height:height of array
 * Return: NULL if width or height <= 0, arr if success
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(int *) * width);
		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			arr[i] = malloc(sizeof(int) * height);
			if (arr[i] == NULL)
			{
				for (i = 0; i < width; i++)
				{
					free(arr[i]);
				}
				free(arr);
				return (NULL);
			}
		}
	}
	return (arr);
}
