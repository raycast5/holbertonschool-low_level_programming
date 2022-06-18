#include "main.h"

/**
 * _strpbrk - Returns a pointer to the first occurrence
 * of any bytes in the string @s
 * @s: string to be searched
 * @accept: acceptable chars to be located in string
 * Return: @s if @c is found, NULL otherwise.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				return (s + i);
			}
		}
	}
return (0);
}
