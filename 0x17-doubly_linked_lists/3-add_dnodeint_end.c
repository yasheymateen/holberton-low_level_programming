#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - function that adds new node at end of list
 * @head: head of list
 * @n: value inside node
 * Return: address of new element, or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
