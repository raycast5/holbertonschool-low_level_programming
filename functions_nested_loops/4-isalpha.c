#include "main.h"

/**
* _isalpha - determines if c is alphabet character
* @c: the character to be categorized
* Return: 1 if c is lowercase or uppercase, 0 if otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'Z'))
	return (1);
	else
	return (0);
}
