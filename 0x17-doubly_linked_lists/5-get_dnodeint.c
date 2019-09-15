#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of list
 * @index: index of node starting from 0
 * Return: nth node from linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter;

	tmp = head;
	counter = 0;
	while (tmp && counter <= index)
	{
		if (counter == index)
			return (tmp);
		tmp = tmp->next;
		counter++;
	}
	return (NULL);
}
