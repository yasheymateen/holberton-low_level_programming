#include "holberton.h"

/**
 * _puts - prings a string followed by a new line.
 * @str: address of string to be printed
 * Return: void
 */
void _puts(char *s)
{
int length = 0;

while (*(s + length) != '\0')
{
_putchar(*(s + length));
length++;
}
_putchar('\n');
}
