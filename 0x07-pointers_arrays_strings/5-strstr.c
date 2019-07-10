#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string from which other string is to be located
 * @needle: substring to find
 * Return: a pointer to the beginning of the located substring (or NULL)
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *beg = haystack;
char *occur = needle;

while (*occur == *haystack && *occur != '\0' && *haystack != '\0')
{
haystack++;
occur++;
}
if (*occur == '\0')
return (beg);
haystack = beg + 1;
}
return (0);
}
