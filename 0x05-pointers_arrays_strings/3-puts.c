#include "holberton.h"

/**
 * puts - prings a string followed by a new line.
 *
 * Return: void
 */
void _puts(char *str)
{
  int length = 0;

  while (*(str + length) !='\0')
    {
      _putchar(*(str + length));
      length++;
    }
  _putchar('\n');
}
