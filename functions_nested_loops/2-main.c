#include "main.h"

/**
* print_alphabet - prints the alphabet
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char alfa[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
		while (i < 26)
		{
		_putchar(alfa[i]);
			++i;
		}
	_putchar('\n');
}
