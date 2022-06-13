#include "main.h"

/**
 * print _line - Prints a line @n number of times
 * @n: number of lines to be printed
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
