#include "main.h"

/**
 * puts_half - prints latter half of string
 * @str: the string to be reversed
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	if (i % 2 == 0)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (j >= i / 2)
			{
				_putchar(str[j]);
			}
		}
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (j > i / 2)
			{
				_putchar(str[j]);
			}
		}
	}
_putchar('\n');
}

