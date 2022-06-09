#include "main.h"

/**
* _islower - determines if c is lowercase
* c - is char
* Return: 1 if c is lowercase, 0 if otherwise.
*/

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	return (1);
	else
	return (0);
}
