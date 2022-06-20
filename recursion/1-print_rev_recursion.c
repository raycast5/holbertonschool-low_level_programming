#include "main.h"

/**
 * print_rev_recursion - reverses a string using recursion
 * 
 * @s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
