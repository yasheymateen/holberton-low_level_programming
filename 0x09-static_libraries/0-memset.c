#include "holberton.h"

/**
 * _memset - fills the first n bytes of memory area.
 * @s: memory area pointer.
 * @b: constant byte.
 * @n:  bytes of memory.
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
