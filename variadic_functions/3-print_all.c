#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints arguments of given type
 * @format: - argument type
 * Return: - Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, x = 0;
	char *sval;

	va_start(ap, format);
	while (format && format[i])
	{
		if (x == 1)
		{
			printf(", ");
		}
		x = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				sval = va_arg(ap, char *);
					if (!sval)
					{
						printf("(nil)");
						break;
					}
				printf("%s", sval);
				break;
			default:
				x = 2;
		}
	i++;
	}
va_end(ap);
printf("\n");
}
