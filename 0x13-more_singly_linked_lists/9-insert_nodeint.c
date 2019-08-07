#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given index
 * @head: linked list
 * @index: index
 * @n: new value
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *x, *new;
	unsigned int i;

	if (*head == NULL && index != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0, x = *head; i < (index - 1) && x != NULL; i++, x = x->next)
		;
	if (i != (index - 1))
	{
		free(new);
		return (NULL);
	}
	new->next = x->next;
	x->next = new;
	return (new);
}
