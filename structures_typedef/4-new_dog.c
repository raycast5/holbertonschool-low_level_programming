#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * clonestr - clones string
 *
 * @s1: string to be copied
 * Return: s2
 */

char *clonestr(char *s1)
{
	int i, len1;
	char *s2;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1]; len1++)
		{
		}
		s2 = malloc(sizeof(char) * len1 + 1);
			if (s1 == NULL)
			{
				free(s1);
				return (NULL);
			}
		for (i = 0; i <= len1; i++)
		{
			s2[i] = s1[i];
		}
	return (s2);
	}
	else
	{
		return (NULL);
	}
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->name = clonestr(name);
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->age = age;
	nd->owner = clonestr(owner);
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
	}
	return (nd);
}
