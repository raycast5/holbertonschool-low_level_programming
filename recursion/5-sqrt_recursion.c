#include "main.h"

/**
 * root - helper function to find square root
 *
 * @i: index
 * @n: number which sq root will be determined
 *Return: square of number
 */

int root(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		return (root(i + 1, n));
	}
}

/**
 * _sqrt_recursion - finds the perfect square root of numbers
 * @n: number inputted
 *
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	return (root(1, n));
}
