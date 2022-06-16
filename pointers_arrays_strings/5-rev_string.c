#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, x, length;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
		length = (i - 1);
	for (x = 0; x < length; x++)
	{
		temp = s[x];
		s[x] = s[length];
		s[length] = temp;
		length--;
	}
}

