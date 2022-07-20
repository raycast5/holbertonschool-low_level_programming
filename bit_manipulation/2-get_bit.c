#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the bit of @n at @index
 * @n: number
 * @index: index of the requested bit
 * Return: bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n && index < 65)
	{
		if (n & (1 << index))
			return (1);
		else
			return (0);
	}
return (-1);
}
