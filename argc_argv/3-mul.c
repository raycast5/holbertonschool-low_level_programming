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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
