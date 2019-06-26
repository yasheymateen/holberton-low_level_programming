#include <stdio.h>
#include "holberton.h"

void print_to_98(int n)
{
  if(n<98)
    {
      for (n=n; n<98; n++)
	printf("%d, ", n);
      printf("%d\n", 98);
    }
  else if(n >98)
    {
      for(n=n; n>98; n--)
	{
	  printf("%d, ", n);
	}
      printf("%d\n", 98);
    }
  else
    {
      printf("%d\n", 98);
    }
}
