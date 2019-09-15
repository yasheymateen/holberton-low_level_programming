#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - function that returns elements in a linked list
 * @h: head of list
 * Return: # of elements/nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
