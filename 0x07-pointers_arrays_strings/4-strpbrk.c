#include "holberton.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s: string pointer
 *@accept: string for which to search bytes
 *Return - pointer to byte in s that matches one of the bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept);
{
int a, b;

for (a = 0; *(s + a); a++)
{
for (b = 0; *(accept + b); b++)
{
return (s + a);
}
}

return ('\0');
}
