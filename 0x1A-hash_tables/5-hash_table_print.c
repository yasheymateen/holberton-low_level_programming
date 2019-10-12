#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	short int start;
	unsigned long int size, i;
	hash_node_t **arr, *temp;

	if (!ht)
		return;
	start = 1;
	arr = ht->array;
	size = ht->size;
	putchar('{');
	for (i = 0; i < size; i++)
	{
		if (arr[i])
		{
			temp = arr[i];
			while (temp)
			{
				if (!start)
				{
					printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
				}
				else
				{
					printf("'%s': '%s'", temp->key, temp->value);
					start = 0;
				}
				if (!temp->next)
					break;
				temp = temp->next;

			}
		}
	}
	printf("}\n");
}
