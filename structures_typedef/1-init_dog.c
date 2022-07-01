#include "dog.h"

/**
 * init_dog - initilizes variables of struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
