#include "main.h"

/**
 * _isdigit - check if @c is a digit
 * @c: char to be classified
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	ifi (c >= '0' && c <= '9')
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
