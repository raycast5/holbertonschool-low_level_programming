#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - create array containing a duplicate of a string.
 *
 * @str: string to be duplicated
 * Return: NULL if str is NULL, duplicated str if success
 */

char *_strdup(char *str)
{
	int i, len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
	}
	copy = malloc(sizeof(char) * len + 1);
		if (copy == NULL)
		{
		return (NULL);
		}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
