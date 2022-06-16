#include "main.h"

/**
 * string_toupper - replace lowercase elements of string with uppercase.
 * @s: string to be converted
 * Return: @s
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
