#include "main.h"

/**
 * print_square - Prints a square using the # character
 * @size: size of square to be printed
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
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
