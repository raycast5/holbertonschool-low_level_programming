#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - sums the given arguments
 *
 * @separator: separator string
 * @n: number of arguments
 * Return: sum of all arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x = n - 1;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < x)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
