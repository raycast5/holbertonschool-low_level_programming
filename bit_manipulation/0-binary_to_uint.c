#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: binary number.
 * Return: converted integer, 0 if b is not binary.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;

	if (b)
	{
		for (dec = 0; *b; b++)
		{
			if (*b == '1')
			{
				dec = (dec << 1) | 1;
			}
			else if (*b == '0')
			{
				dec <<= 1;
			}
			else
			{
				return (0);
			}
		}
	return (dec);
	}
return (0);
}

