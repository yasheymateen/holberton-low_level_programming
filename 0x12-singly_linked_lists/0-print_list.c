#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: # of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
