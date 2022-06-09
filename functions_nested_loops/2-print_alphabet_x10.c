#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char alfa[] = "abcdefghijklmnopqrstuvwxyz";
	int n = 0

	while (n < 10)
	{	
	int i = 1;
		while (i < 26)
			{
			_putchar(alfa[i]);
				++i;
			}
		++i;
	}
	_putchar('\n');
}
