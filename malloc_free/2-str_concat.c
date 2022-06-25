#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - create array containing 2 concatenated strings.
 *
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: NULL if str is NULL, duplicated str if success
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2, l3;
	char *con;

	for (l1 = 0; s1[l1]; l1++)
	{
	}
	for (l2 = 0; s2[l2]; l2++)
	{
	}
	l3 = l1 + l2;
	con = malloc(sizeof(char) * l3);
		if (con == NULL)
		{
		return (NULL);
		}
	for (i = 0; i < l1; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		con[i] = s2[j];
		i++;
	}
	return (con);
}
