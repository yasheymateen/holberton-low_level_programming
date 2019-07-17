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
	int i, j, s1len, s2len;

	s1len = 0;
	s2len = 0;
	if (s1)
		while (*(s1 + s1len) != '\0')
			s1len++;
	if (s2)
		while (*(s2 + s2len) != '\0')
			s2len++;
	s = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (s)
	{
		if (s1)
			for (s1len = 0; *(s1 + s1len) != '\0'; s1len++)
				*(s + s1len) = *(s1 + s1len);
		if (s2)
			for (s2len = 0; *(s2 + s2len) != '\0'; s2len++)
				*(s + s1len + s2len) = *(s2 + s2len);
		*(s + s1len + s2len) = '\0';
	}
	return (s);
}











}
