#include "main.h"

/**
 * _memset - writes  buffer @n times
 * @s: array to be written into
 * @b: data to be written into array
 * @n: amount of elements to be written
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}

