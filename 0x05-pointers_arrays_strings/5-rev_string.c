#include "holberton.h"
/**
*rev_string- reverses a string.
* @s: address of string to be reversed
* Return: void.
*/
void rev_string(char *s)
{
count = strlength(*s)

for (i = 0; i < (count - 1); i++)
{
temp = s[i];
s[i] = s[count - 1];
s[count - 1] = temp;
count--;
}
}
