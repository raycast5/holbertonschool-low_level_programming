#include <stdio.h>
/**
 * print_to_98 - prints from n until 98
 * @n: number given to start.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n  >= 99; n--)
		{
			printf("%d, ", n);
			if (n == 99)
			{
				printf("98\n");
			}
		}
	}
	else if (n < 98)
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
			if (n == 97)
			{
				printf("98\n");
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}

}
