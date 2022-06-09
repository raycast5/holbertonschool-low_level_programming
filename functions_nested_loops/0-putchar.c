#include "main.h"

/**
* main - prints array containing "_putchar"
*Return: Always 0 (Success)
*/

int main(void)
{
	char str[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
			++i;
	}

	_putchar('\n');

return (0);
}
