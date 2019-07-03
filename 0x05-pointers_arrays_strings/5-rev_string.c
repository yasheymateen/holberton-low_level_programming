#include "holberton.h"
/**
*rev_string- reverses a string.
* @s: address of string to be reversed
* Return: void.
*/
void rev_string(char *s)
{
int i = 0;
int j = 0;
while (s[j] != '\0')
{
++i;
++j;
}
--i;
}
