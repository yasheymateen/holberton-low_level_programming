#include "holberton.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s: string pointer
 *@accept: string for which to search bytes
 *Return - pointer to byte in s that matches one of the bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept);
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
