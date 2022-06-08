#include <stdio.h>

/**
* main - displays numbers 1-9 separated by commas and spaces
* Return:
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
		if (num <= '8')
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
