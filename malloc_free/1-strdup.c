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
	int i;
	char *copy;
	int len = _strlen(str);

	copy = malloc(sizeof(char) * len);
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
