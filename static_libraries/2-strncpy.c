#include "main.h"

/**
 * _strncpy - copies up to the n element of src string to the dest string
 * @n: number of bytes allowed
 * @src: the source string
 * @dest: the destination string
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[y] = src[y];
	}
	for ( ; y < n; y++)
		dest[y] = '\0';
	return (dest);
}
