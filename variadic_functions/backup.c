#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 *
 * @va_list - variable from format
 * @c: a char
 * Return: Nothing
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints an int
 *
 * @va_list - variable from format
 * @i: an int
 * Return: Nothing
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - prints a float
 *
 * @va_list - variable from format
 * @f: a float
 * Return: Nothing
 */

void print_float(va_list f)
{
	printf("%f", va_arg(c, float));
}

/**
 * print_string - prints a string
 *
 * @va_list - variable from format
 * @s: a string
 * Return: Nothing
 */

void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char *
