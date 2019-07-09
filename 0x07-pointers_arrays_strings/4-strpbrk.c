#include "holberton.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s: string pointer
 *@accept: string for which to search bytes
 *Return - pointer to byte in s that matches one of the bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept);
{
unsigned int x;

while (*s != '\0')
{
for (x = 0; accept[x] != '\0'; x++)
{
if (*s == accept[x])
{
return (s);
}
}
s++;
}
return (0);
}
