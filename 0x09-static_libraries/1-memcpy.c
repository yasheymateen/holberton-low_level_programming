#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: destinataion memory area.
 * @src: source memory area.
 * @n: number of bytes from memory area.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
