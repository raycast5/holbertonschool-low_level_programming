#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - perform simple arithmetic operations
 *
 * @argc: number of arguments
 * @argv: arguments
 * Return: result
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int result, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))
			&& (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (ptr != NULL)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = ptr(a, b);
		printf("%d\n", result);
	}
	else
	{
	printf("Error\n");
		exit(99);
	}
return (0);
}
