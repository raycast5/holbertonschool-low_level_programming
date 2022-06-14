#include "main.h"

/**
 * _strlen - determines the length of a string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	
	for (i = 0; (*(s + i) != '\0'); ++i);
	return (i);
}
