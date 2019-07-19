#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer to check
 * Return: poiner to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
