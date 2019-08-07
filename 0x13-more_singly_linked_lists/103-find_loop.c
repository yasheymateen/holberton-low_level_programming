#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - finds loop in a linked list
 * @head: head
 * Return: address of node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first;
	listint_t *second;

	first = second = head;
	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			first = head;
			while (first && second)
			{
				if (first == second)
					return (first);
				first = first->next;
				second = second->next;
			}
		}
	}
	return (NULL);
}
