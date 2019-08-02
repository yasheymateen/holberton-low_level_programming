#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: beginning of list
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
