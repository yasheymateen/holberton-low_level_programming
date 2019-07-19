#include <stdlib.h>
#include "holberton.h"
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
	for (count1 = 0; s1[count1]; count1++)
		;
	for (count2 = 0; s2[count2]; count2++)
		;
	if (count2 > n)
		count2 = n;
	else
		n = count2;
	size = count1 + count2 + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size - 1; i++)
		if (i < count1)
			s[i] = s1[i];
		else
			s[i] = s2[i - count1];
	s[size] = '\0';
	return (s);
}
