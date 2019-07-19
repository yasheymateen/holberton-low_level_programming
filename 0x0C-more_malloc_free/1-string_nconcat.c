#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
/**
 * string_nconcat - concatenates two strings
 * @s1: string to copy
 * @s2: new string to copy to up to n bytes
 * @n: # of bytes to copy
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, count1, count2, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	count1 = _strlen(s1);
	count2 = _strlen(s2);
	if (n > count2)
		n = count2;
	s = malloc(sizeof(char) * (count1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (size = 0; size < n; size++, i++)
		s[i] = s2[size];
	s[i] = '\0';
	return (s);
}

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
