#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * @s: string to be searched
 * @accept: acceptable chars to be counted
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != 44 && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
