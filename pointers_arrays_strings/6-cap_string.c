#include "main.h"

/**
 * cap_string - Capitalize each word on sting
 * @s: string to be converted
 * Return: @s
 */

char *cap_string(char *s)
{
	int i, j, class;
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')',
					'{', '}', ' ', '\n', '\t'};

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] -= 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			class = 0;
			for (j = 0; class == 0 && j < 13; j++)
			{
				if (s[i - 1] == sep[j])
				{
					class = 1;
					s[i] -= 32;
				}
				else
				{
					class = 0;
				}
			}
		}
	}
	return (s);
}
