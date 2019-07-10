#include "holberton.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string for which to get length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (_strlen_recursion(s) + 1);
}
/**
 * palindrome_checker - checks if string is palindrome
 * @str: string
 * @len: length of string
 * Return: str length  value
 */

int palindrome_checker(char *str, int len)
{
if (len <= 0)
return (1);
if (str[0] == str[len - 1])
{
return (palindrome_checker(str + 1, len - 2));
}
else
return (0);
}

/**
 * is_palindrome - function that returns 1 if string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

if (len <= 1)
return (1);
else
return (palindrome_checker(s, len));
}
