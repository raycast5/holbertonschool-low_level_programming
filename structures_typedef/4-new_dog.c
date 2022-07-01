#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
		if (nd == NULL)
		{
			free(nd->owner);
			free(nd->name);
			free(nd);
			return (NULL);
		}
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
