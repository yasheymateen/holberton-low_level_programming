#include "holberton.h"
/**
 * _strchr - functioin that locates a character in a string.
 * @s: string in which to locate.
 * @c: character c for which occurrence is checked.
 * Return: pointer to first occurrence of c (NULL if not found).
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else if (*(s + 1) == c)
{
return (s + 1);
}
s++;
}
return (s + 1);
}
