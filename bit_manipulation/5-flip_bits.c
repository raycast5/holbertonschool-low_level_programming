#include <stdio.h>
#include "main.h"

/**
 * count_bits - counts set bits
 * @n: an int
 * Return: count
 */

unsigned int count_bits(unsigned long int n)
{
	unsigned long int count;

	for (count = 0; n > 0; count++)
	{
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - determines the number of bits to flip
 * @n: an int
 * @m: another int
 * Return: result of count_bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}


