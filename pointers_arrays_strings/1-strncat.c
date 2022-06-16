#include "main.h"

/**
 * _strncat - appends up to the n element of src string to the dest string
 * @n: number of bytes allowed
 * @src: the source string
 * @dest: the destination string
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; (src[y] != '\0' && y < n && n > 0); y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
