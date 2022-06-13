#include "main.h"

/**
 * print_diagonal - Prints a diagonal @n number of times
 * @n: number of lines to be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
			_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
