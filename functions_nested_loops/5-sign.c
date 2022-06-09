#include "main.h"

/**
* print_sign - determines the sign of @n
* @n: the character to be categorized
* Return: 1 if @n is greater than, 0 if equal to 0, -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
