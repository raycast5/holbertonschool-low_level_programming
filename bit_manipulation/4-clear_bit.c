#include <stdio.h>
#include "main.h"

/**
 * clear_bit - cleas value of bit at index
 * @n: number
 * @index: bit position
 * Return: 1 if it works -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (n && index < 65)
	{
		temp = ~(1 << (index));
		*n &= temp;
		return (1);
	}
return (-1);
}
