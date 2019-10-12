#include "hash_tables.h"
#include <stdio.h>
/**
 * key_index - function that gives you the key
 * @key: pointer to key
 * @size: size of array of hash table
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
