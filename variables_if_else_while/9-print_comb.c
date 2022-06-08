#include <stdio.h>

/**
* main - displays numbers 1-9 separated by commas and spaces
* Return:
*/

int main(void)
{
	int num;
	for (num = '0'; num <= '8'; num++)
	{
	putchar(num);
	putchar(',');
	putchar(' ');
	}
	putchar('9');
return (0);
}
