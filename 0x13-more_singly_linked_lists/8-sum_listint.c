#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns sum of all data n in linked lists
 * @head: linked list
 * Return: sum i
 */

int sum_listint(listint_t *head)
{
	int i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; head = head->next)
		i += head->n;
	return (i);
}
