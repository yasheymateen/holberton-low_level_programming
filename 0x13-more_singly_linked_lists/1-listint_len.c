#include <stdio.h>
#include "lists.h"

/**
 * listint_len - finds # elements in list
 * @h: linked list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
		;
	return (i);
}
