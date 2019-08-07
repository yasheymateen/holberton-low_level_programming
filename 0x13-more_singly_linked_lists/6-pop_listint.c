#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	temp = *head;
	if (temp == NULL)
		return (0);
	i = temp->n;
	*head = temp->next;
	free(temp);
	return (i);
}
