#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strdup - function that returns pointer to newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: string given as parameter
 * Return: pointer to the duplicated string, else NULL
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}
