#ifndef WOOF
#define WOOF

/**
 * struct dog - struct containing info from dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif
