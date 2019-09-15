#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - function that adds a new node at beginning of list
 * @head: pointer to head of list
 * @n: value inside node
 * Return: address of new element, else NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (!(*head))
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
