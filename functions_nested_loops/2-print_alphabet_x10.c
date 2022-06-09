#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char alfa[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0, n;

	while (n < 10)
	{	
		n = 1;
		while (i < 26)
			{
			_putchar(alfa[i]);
				++i;
			}
		++i;
	}
	_putchar('\n');
}
