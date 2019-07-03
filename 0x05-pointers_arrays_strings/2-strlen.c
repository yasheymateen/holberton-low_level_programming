#include "holberton.h"
/**
 * strlen - returns length of a string given a character input
 * Description: returns length of string given input
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
