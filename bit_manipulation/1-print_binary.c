#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary value of @n
 * @n: number to convert to binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int res, i, flag = 0;

	if (n)
	{
		for (i = 63; i >= 0; i--)
		{
			res = n >> i;

			if (res & 1)
			{
				_putchar('1');
				flag = 1;
			}
			else if (flag == 1)
				_putchar('0');
		}
	}
	else
	{
		_putchar('0');
	}
}
