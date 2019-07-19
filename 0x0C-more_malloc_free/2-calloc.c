#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: # of elements to allocate memory for
 * @size: size of array
 * Return: array that is mallocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	n = arr;
	while (*n != '\0')
	{
		*n = 0;
		n++;
	}
	return (arr);
}
