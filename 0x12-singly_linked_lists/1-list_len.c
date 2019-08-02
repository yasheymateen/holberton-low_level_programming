#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - finds # of nodes in list
 * @h: singly linked list
 * Return: # of nodes in list
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
