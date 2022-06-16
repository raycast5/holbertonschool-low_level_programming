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
	int y = 0;
	int x = 0;

	while (src[y] != '\0' && y < n && n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
