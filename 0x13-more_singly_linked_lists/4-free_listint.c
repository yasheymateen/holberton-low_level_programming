#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free list ints
 * @head: free
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
