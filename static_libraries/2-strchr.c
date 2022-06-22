#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character @c in the string @s
 * @s: string to be searched
 * @c: char to be located in string
 * Return: @s if @c is found, NULL otherwise.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
	return (0);
	}
}
