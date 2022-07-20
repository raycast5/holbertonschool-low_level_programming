#include <stdio.h>
#include "main.h"

/**
 * set_bit - set value of bit at index to 1
 * @n: number
 * @index: bit position
 * Return: 1 if it works -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (n && index < 65)
	{
		p = 1 << index;
		*n |= p;
		return (1);
	}
return (-1);
}
