#include "holberton.h"
/**
 * puts2.c prints one character out of 2 of a string
 *
 * Return: void.
 */
void puts2(char *str)
{
  int i=0;

  while(*str)
    {
      if (i++%2 == 0)
	_putchar(*str);
      str++;
    }
  _putchar('\n');
}
