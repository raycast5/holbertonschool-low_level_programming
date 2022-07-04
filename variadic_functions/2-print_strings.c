#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: separator string
 * @n: number of arguments
 * Return: sum of all arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x = n - 1;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < x)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
