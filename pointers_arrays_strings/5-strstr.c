#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle in the string haystack
 * @needle: the substring to be found
 * @haystack: the string to find @needle in
 * Return: the beginning of @needle in @haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, length, temp, count;
	
	for (length = 0; needle[length] != '\0'; length++)
	{
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		temp = i;
		count = 0;
		for(j = 0; j < length; j++)
		{
			if (haystack[temp] == needle[j])
			{
				temp++;
				count ++;
			}
		}
		if (count == length)
		{
			return (haystack + i);
		}
	}
return (0);
}
