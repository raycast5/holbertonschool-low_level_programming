#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be counted
 * Return: 0 if it reaches the end of a string, string length otherwise
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}