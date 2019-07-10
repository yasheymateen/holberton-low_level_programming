#include "holberton.h"
/**
 * cap_string - capitalized all words of a string
 * @a: string to capitalize
 * Return: char string
 */

char *cap_string(char *a)
{
  int i, x;
  char ind[] = " \t\n,;.!/\"(){}";

  i = 1;
  if (a[0] >= 'a' && a[0] <= 'z')
    a[0] -= ('a' - 'A');
  while (a[i] != '\0')
    {
      for (x = 0; ind[x] != '\0'; x++)
	if(a[i - 1] == ind[x] && (a[i] >= 'a' && a[i] <= 'z'))
	  a[i] -= ('a' - 'A');
      i++;
    }
  return (a);
}
