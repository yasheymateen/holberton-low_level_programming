#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
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
 * _strdup - string duplicate function
 * @src: source string
 * Return: pointer to space
 */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * add_node_end - add new nodes to  end of list
 * @head: current place in list
 * @str: string to add
 * Return: pointer to current position
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *curr;
	char *temp;

	if (str == NULL)
		return (NULL);
	temp = _strdup(str);
	if (temp == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = temp;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	return (*head);
}
