#include "holberton.h"
/**
 * _strlen - returns length of a string given a character input
 * @s: address of string input
 * @length: length of string
 * return - void.
 */
int _strlen(char *s)
{
int length = 0;

while (*(s + length) != '\0')
length++;

return (length);
}
