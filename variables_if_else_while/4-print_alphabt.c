#include <stdio.h>

/**
* main - prints the alphabet in lowercase letters except q and e
* Return: 0
*/

int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if ((x != 'q') && (x != 'e'))
		putchar(x);
		x++;
	}
	putchar('\n');
return (0);
}
