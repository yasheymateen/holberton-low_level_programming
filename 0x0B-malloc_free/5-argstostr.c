#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - function that concatenates all the arguments of program
 * @ac: # of arguments
 * @av: agrument pointer
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, n, length;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}

	s = malloc(sizeof(char) * length + 1);
		if (!s)
			return (NULL);
	for (i = 0, n = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, n++)
			s[n] = av[i][j];
		s[n] = '\n';
		n++;
	}
	return (s);
}
