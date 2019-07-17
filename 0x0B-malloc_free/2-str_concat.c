#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - function to get length of a string input
 * @s: address of string input
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space w/ s1, s2 contents
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	j = 0;
	while (s2[j] || str[i])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
