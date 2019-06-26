#include "holberton.h"

/**
 This file returns 1 whether the passed argument is a lowercase or uppercase alphabatical character and returns 0 if it is neither of those
 */

int _isalpha(int c)
{
  if ((c>='a' && c<= 'z') || (c>='A' && c<='Z'))
    return(1);
  else
    return(0);
}
