#include "main.h"

/**
 * _isupper - Determines if @c is uppercase.
 * @c: char to be classified.
 * Return: 1m if upper, 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
