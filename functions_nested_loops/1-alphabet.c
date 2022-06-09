#include "main.h"

/**
* print_alphabet - prints the alphabet
* Return: Always 0 (Success)
*/

int main(void)
{
	char alfa[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;	
		while (i < 26)
		{
		_putchar(alfa[i]);
			++i;
		}
	_putchar('\n');
return (0);
}
