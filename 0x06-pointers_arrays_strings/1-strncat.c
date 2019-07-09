#include "holberton.h"
/**
 * _strncpy - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes to use.
 * Return: pointer to resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int a, b;

a = 0;
for (b = 0; dest[b] != '\0'; b++)
;
while (src[a] != '\0' && a < n)
{
dest[a + b] = src[a];
a++;
}
return (dest);
}
