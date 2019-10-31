#include "sort.h"
#include <stdio.h>

/**
 * swap_nodes - swaps nodes in doubly linked list
 * @head: head of list
 * @a: 1st node
 * @b: 2nd node
 * Return: void
 */

void swap_nodes(listint_t **head, listint_t *a, listint_t *b)
{
	listint_t *tmp = a->prev;

	if (a == *head)
	{
		a->next = b->next;
		a->prev = b;
		if (b->next)
			(b->next)->prev = a;
		b->next = a;
		b->prev = tmp;
		*head = b;
	}
	else
	{
		a->next = b->next;
		a->prev = b;
		if (b->next)
			b->next->prev = a;
		b->next = a;
		b->prev = tmp;
		tmp->next = b;
	}
}

/**
 * insertion_sort_list - sorts list with insertion sort
 * @list: address of pointer to list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *start;

	if (!list || !(*list) || !((*list)->next))
		return;

	start = (*list)->next;
	while (start)
	{
		i = start;
		while (i && i->prev)
		{
			if (i->n < i->prev->n)
			{
				swap_nodes(list, i->prev, i);
				print_list(*list);
			}
			else
			{
				i = i->next;
			}
		}
		start = start->next;
	}
}
