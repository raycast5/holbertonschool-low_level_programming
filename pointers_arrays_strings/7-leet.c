#include "main.h"

/**
 * leet - converts string to leet
 * @s: string to be converted
 * Return: s
 */
char *leet(char *s)
{
	char cap[] = {'A', 'E', 'O', 'T', 'L'};
	char low[] = {'a', 'e', 'o', 't', 'l'};
	char leet[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == cap[j] || s[i] == low[j])
			{
				s[i] = leet[j];
			}
		}
	}
return (s);
}

