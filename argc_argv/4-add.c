#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds all arguments
 *
 * @argc: length of @argv
 * @argv: array of arguments
 * Return: 0 if success, 1 if error7
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);

	}
return (0);
}
