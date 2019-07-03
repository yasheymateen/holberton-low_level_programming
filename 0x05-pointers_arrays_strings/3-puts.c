#include "holberton.h"

/**
 * _puts - prings a string followed by a new line.
 * @str: address of string to be printed
 * Return: void
 */
void _puts(char *str)
{
int length = 0;

while (*(str + length) != '\0')
{
_putchar(*(str + length));
length++;
}
_putchar('\n');
}
