#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t **arr, *temp, *node;

	arr = ht->array;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (arr[i])
		{
			node = arr[i];
			while (node)
			{
				temp = node;
				free(temp->key);
				free(temp->value);
				node = node->next;
				free(temp);
			}

		}
	}
	free(arr);
	free(ht);
}
