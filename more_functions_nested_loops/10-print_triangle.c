#include "main.h"

/**
 * print_triangle - Prints a triangle using the # character
 * @size: size of square to be printed
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, x, y;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = (size -1); x > i; --x)
			{
				_putchar(' ');
			}
			for (y = 0; y <= i; ++y)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
