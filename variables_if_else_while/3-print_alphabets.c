#include <stdio.h>

/**
* main - prints the alphabet in lowercase letters and uppercase letters
* Return: 0
*/

int main(void)
{
	int alfa;
	int alfau;

	for (alfa = 'a'; alfa <= 'z'; alfa++)
	putchar(alfa);
	for (alfau = 'A'; alfau <= 'Z'; alfau++)
	putchar(alfau);
	putchar('\n');

return (0);
}
