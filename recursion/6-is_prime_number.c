#include "main.h"

/**
 * primecheck - check if n divides by i
 * @i: counter
 * @n: number to be classified
 * Return: 1 if prime, 0 otherwise
 */

int primecheck(int i, int n)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}

	return (primecheck(i + 1, n));
}

/**
 * is_prime_number - check if number is prime
 * @n: number to be classified.
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
		return (primecheck(2, n));
}
