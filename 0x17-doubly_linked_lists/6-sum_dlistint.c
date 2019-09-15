#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of all the data in linked list
 * @head: head of list
 * Return: sum of all data, else 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	tmp = head;
	sum = 0;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
