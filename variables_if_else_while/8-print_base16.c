#include <stdio.h>

/**
* main - prints all the numbers of base 16
* Return: 0
*/

int main(void)
{
	char alfa = 'a';
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alfa <= 'f')
	{
		putchar(alfa);
		alfa++;
	}
	putchar('\n');
return (0);
}
