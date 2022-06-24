#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 arguments
 *
 * @argc: length of @argv
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", (x * y));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
