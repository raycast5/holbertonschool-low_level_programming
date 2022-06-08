#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints if the number given is negative or positve
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%i ", n);
		if (n > 0)
			printf("is positive\n");
		else if (n == 0)
			printf("is zero\n");
		else
			printf("is negative\n");

	return (0);
}
