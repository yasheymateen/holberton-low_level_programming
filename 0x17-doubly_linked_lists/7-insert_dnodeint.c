#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: pointer to head of list
 * @idx: index where new node should be added
 * @n: value inside node
 * Return: address of new node, or NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*h == NULL)
	{
		*h = node;
		node->next = NULL;
		return (node); }
	tmp = *h;
	if (idx == 0)
	{
		node->next = tmp;
		tmp->prev = node;
		*h = node;
		return (node); }
	while (counter != (idx - 1))
	{
		tmp = tmp->next;
		counter++;
		if (tmp == NULL)
		{
			free(node);
			return (NULL); }}
	node->next = tmp->next;
	node->prev = tmp;
	if (tmp->next == NULL)
	{
		tmp->next = node; }
	else
	{
		tmp->next->prev = node;
		tmp->next = node; }
	return (node); }
