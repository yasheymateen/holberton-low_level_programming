#include <string.h>
#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_get - retreives a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value associated with elment
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			if (!temp->next)
				break;
			temp = temp->next;
		}
	}
	return (NULL);
}
