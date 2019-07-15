#include "holberton.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: buffer that function will use to store result
 * @size_r: buffer size
 * Return: number string (or NULL if can't be stored)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int a, b, c;
  a = 0;
  b = 0;
  c = 0;

	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		b = 1;
	}
	while (a < size_r && (n1[a] != '\0' || n2[a] != '\0' || r[b] != '\0'))
	{
		if ((n1[a + 1] - '0') + (n2[a + 1] - '0') >= 10)
			c = 1;
		else
			c = 0;
		r[b] = (n1[a] - '0') + (n2[a] - '0') + c;
		r[b] = r[b] % 10 + '0';
		a++;
		b++;
		if (n1[a] == '\0' || n2[a] == '\0')
			r[b] = '\0';
	}
	r[b] = '\0';
	return (r);
}
