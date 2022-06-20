#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonal elements of array
 *
 * @a: array to be printed.
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	float s1, s2;

	for (i =  0; i < size; i++)
	{
		s1 += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		s2 += a[(size - 1) * (j + 1)];
	}
	printf("%.0f, %.0f\n", s1, s2);
}
