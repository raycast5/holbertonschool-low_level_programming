#include "main.h"

/**
 * print_rev - Prints a string to standard output in reverse"
 * @str: the string to be printed
 * Return: Always 0.
 */
void print_rev(char *str)
{
	int i, x, length;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	length = (i - 1);
	for (x = length; x >= 0; x--)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
