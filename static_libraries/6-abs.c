#include "main.h"

/**
 * _abs - prints absolute value of @n
 * @n: number to be determined
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	return (n);
}
