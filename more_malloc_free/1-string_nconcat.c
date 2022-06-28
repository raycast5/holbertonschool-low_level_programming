#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - create array containing 2 concatenated strings.
 *
 * @s1: string to concatenate
 * @s2: string to concatenatei
 * @n: number of byte to concat from s2
 * Return: NULL if str is NULL, duplicated str if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2, l3;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1]; l1++)
	{
	}
	for (l2 = 0; s2[l2]; l2++)
	{
	}
	if (n >= l2)
		l3 = l1 + l2;
	else
		l3 = l1 + n;
	con = malloc((sizeof(char) * l3) + 1);
		if (con == NULL)
		{
		return (NULL);
		}
	for (i = 0; i < l1; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		con[i] = s2[j];
		i++;
	}
	return (con);
}
