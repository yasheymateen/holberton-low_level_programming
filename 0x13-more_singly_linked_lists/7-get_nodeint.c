#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: linked list
 * @index: index position of node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++, head = head->next)
		;
	if (i != index)
		return (NULL);
	return (head);
}
