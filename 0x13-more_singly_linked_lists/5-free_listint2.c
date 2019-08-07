#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *n, *temp;

	if (head && *head)
	{
		temp = *head;
		while (temp)
		{
			n = temp;
			temp = temp->next;
			free(n);
		}
		*head = NULL;
	}
}
