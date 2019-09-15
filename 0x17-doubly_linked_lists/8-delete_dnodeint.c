#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to head of list
 * @index: index of node that should be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1, *tmp = *head;
	unsigned int counter = 0;

	if (!(*head) || !head)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	while (counter < (index - 1))
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		counter++;
	}
	tmp1 = tmp->next->next;
	if (tmp->next->next)
		tmp->next->next->prev = tmp;
	free(tmp->next);
	tmp->next = tmp1;
	return (1);
}
