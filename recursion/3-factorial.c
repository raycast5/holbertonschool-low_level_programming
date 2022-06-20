#include "main.h"

/**
 * factorial - determines the factorial of a given number
 *
 * @n: number given
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
