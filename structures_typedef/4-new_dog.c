#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int ln, lo, i;
	dog_t *nd;

	if (name == NULL || owner == NULL)
		return (NULL);
	nd = malloc(sizeof(dog_t));
		if (nd == NULL)
			return (NULL);
	for (ln = 0; name[ln]; ln++)
	;
	nd->name = malloc(sizeof(char) * ln + 1);
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	for (i = 0; i < ln + 1; i++)
	{
		nd->name[i] = name[i];
	}
	nd->age = age;
	for (lo = 0; owner[lo]; lo++)
	;
	nd->owner = malloc(sizeof(char) * lo + 1);
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	for (i = 0; i < lo + 1; i++)
	{
		nd->owner[i] = owner[i];
	}
return (nd);
}
