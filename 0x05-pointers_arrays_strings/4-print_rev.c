#include "holberton.h"
/**
 * print_rev - writes a function that prints a string in reverse.
 *
 * Return: Always void.
 */
void print_rev(char *s)
{
  int i;
  
  while (s[i] != '\0')
    {
      i++;
    }
  i--;
  while (s[i] != '\0')
    {
      _putchar(s[i--]);
    }
  _putchar('\n');
}
