#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - copies string
 *
 * @src: string to be copied
 * @dest: copied string
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
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
	if (!nd)
	{
		free(nd);
		return (NULL);
	}
	nd->name = malloc(sizeof(name) + 1);
	if (!nd->name)
	{
		free(nd);
		return (NULL);
	}
	nd->name = malloc(sizeof(name) + 1);
	if (!nd->owner)
	{
		free(nd->name);
		free(nd);
	}
	nd->age = age;
	nd->name = _strcopy(nd->name, name);
	nd->owner = _strcopy(nd->owner, owner);

return (nd);
}
