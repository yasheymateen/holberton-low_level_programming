#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space w/ s1, s2 contents
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, size, x;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < (i + j + 1); x++)
	{
		if (x < i)
			s[x] = s1[x];
		else
			s[x] = s2[x - i];
	}
	return (s);
}
