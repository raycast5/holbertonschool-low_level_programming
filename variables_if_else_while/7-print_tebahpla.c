#include <stdio.h>

/**
* main - prints the alphabet in reverse order
* Return: 0
*/

int main(void)
{
	int alfar = 'z';

	while (alfar >= 'a')
	{
		putchar(alfar);
		alfar--;
	}
	putchar('\n');

return (0);
}
