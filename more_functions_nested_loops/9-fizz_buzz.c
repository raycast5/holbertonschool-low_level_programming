#include <stdio.h>

/**
 * main - prints 1-100, prints "Fizz" for multiples of 3, "Buzz"
 * for multiples of 5 "FizzBuzz" for both
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
		printf("%i ", i);
		}
	}
printf("\n");

return (0);
}
