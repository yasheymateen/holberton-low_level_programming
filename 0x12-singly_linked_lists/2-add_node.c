#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - gets length of string
 * @s: string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node - add new nodes to list
 * @head: current place in list
 * @str: string to add
 * Return: pointer to current position
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *cont;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	cont = malloc((len + 1) * sizeof(char));
	if (cont == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cont[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(cont);
		return (NULL);
	}
	new->str = cont;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
