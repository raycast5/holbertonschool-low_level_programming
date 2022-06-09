#include "main.h"

/**
* main - prints array containing "_putchar"
*Return: Always 0 (Success)
*/

int main(void)
{
	char str[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (int i = 0; i < 8; ++i)
	{
		_putchar(str[i]);
		_putchar('\n');
	}

return (0);
}
