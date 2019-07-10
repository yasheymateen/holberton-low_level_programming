#include "holberton.h"
/**
 * _strlen_recursion - function that returns length of a string
 * @s: string for which to get length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
