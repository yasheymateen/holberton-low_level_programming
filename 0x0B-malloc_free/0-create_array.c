#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - function creates an array of chars and initializes it
 * @size: size of array
 * @c: char to initialize array with
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;

if (size != 0)
arr = malloc(sizeof(c) * size);
else
return (NULL);
while (i < size)
{
*(arr + i) = c;
i++;
}
if (arr == NULL)
return (NULL);
return (*arr);
}
