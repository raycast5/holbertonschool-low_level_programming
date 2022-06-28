#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate mem for array of @nmemb and @size.
 *
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*unsigned int i;*/
	int *c;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		c = malloc(nmemb * size);
		if (c == NULL)
		{
			return (NULL);
		}
		/*for (i = 0; i < nmemb; i++)
		{
			c[i] = 0;
		}*/
	}
	return (c);
}
