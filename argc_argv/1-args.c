#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: length of @argv
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

		printf("%i\n", (argc - 1));
	return (0);
}
