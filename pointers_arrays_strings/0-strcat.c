#include "main.h"

/**
 * _strcat - check appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int x, index;
	char temp[107];
	
	for (x= 0; src[x] != '\0'; x++)
	{
		temp[index] = src[x];
		index++;
	}
	for (x = 0; dest[x]; x++)
	{
		temp[index] = dest[x];
		index++;
	}
	dest[x] = temp[index];
	return (src);
	return (dest);
}
