#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints double linked list
 * @h: head of list
 * Return: # of elements/nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
