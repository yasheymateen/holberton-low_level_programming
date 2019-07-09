#include "holberton.h"
/**
 * _strspn - function that gets length of a prefix substring
 * @s: initial segment which consists bytes from accept
 * @accept: contains bytes contained in s
 * Return: number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b;

a = 0;
while(s[a] != '\0')
{
b = 0;
while (accept[b] != '\0' && s[a] != accept[b])
b++;
if (accept [b] == '\0')
return (a);
a++;
}
return (a);
}
