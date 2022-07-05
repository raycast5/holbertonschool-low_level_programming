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
	int ival, i = 0;
	char *sval;
	char *ftyp = (char *)format;
	float fval;
	char cval;

	va_start(ap, format);
	while (ftyp[i])
	{
		switch (ftyp[i])
		{
			case 'c':
				cval = va_arg(ap, int);
				printf("%c", cval);
				break;
			case 'i':
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f':
				fval = va_arg(ap, double);
				printf("%f", fval);
				break;
		}
		if (ftyp[i] == 's')
		{
			sval = va_arg(ap, char *);
			if (!sval)
			{
			printf("(nil)");
			break;
			}
			printf("%s", sval);
		}
	i++;
	}
va_end(ap);
printf("\n");
}
