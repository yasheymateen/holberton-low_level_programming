#include "holberton.h"
#include <stdio.h>

/**
 * atoi - converts string into integer
 * @s: string to convert to integer
 *
 * Return: int
 */
int _atoi(char *s)
{
  int n, i, sign;

  sign = 1;
  i = 0;
  n = 0;

  while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
    {
      if (s[i] == '-')
	sign *= -1;
      i++;
    }
  while ((s[i] >= '0' && s[i] <= '9') && s[i] != '0')
    {
      if (n>=0)
	{
	  n = n * 10 - (s[i] - '0');
	  i++;
	}
      else
	{
	  n = n * 10 - (s[i] - '0');
	  i++;
	}
    }
  sign*=-1;
  return (n*sign);
}
