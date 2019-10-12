#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update
 * @key: key
 * @value: value associated with key
 * Return: 1 if successful, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *new;

	if (key == NULL || strlen(key) == 0 || value == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->value || !new->key)
		return (0);
	if (ht->array[index])
	{
		for (temp = ht->array[index]; temp; temp = temp->next)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(new->key);
				free(new->value);
				free(new);
				free(temp->value);
				temp->value = strdup(value);
				if (!temp->value)
					return (0);
				return (1);
			}
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	else
	{
		new->next = NULL;
		ht->array[index] = new;
	}
	return (1);
}
