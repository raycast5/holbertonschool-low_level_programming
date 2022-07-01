#ifndef WOOF
#define WOOF

/**
 * struct dog - struct containing info from dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
