#include "hash_tables.h"

/**
 * key_index - returns an array index when given a key
 * @key: hash table key
 * @size: size of hash table
 * Return: index of hash table array
 */

unsigned long int key_index(const unsigned char *key,
unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
