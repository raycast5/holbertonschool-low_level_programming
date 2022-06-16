#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp, x;

	i = n - 1;
	for (x = 0 ; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[i];
		a[i] = temp;
		i--;
	}
}

