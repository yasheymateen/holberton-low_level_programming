#include <holberton.h>

void jack_bauer(void)
{
  int i, x;
  for (i=0; i<24; i++)
    {
      for (x=0; x<60; x++)
	{
	  _putchar((i/10)+'0');
	  _putchar((i%10)+'0');
	  _putchar(':');
	  _putchar((x/10)+'0');
	  _putchar((x%10)+'0');
	  _putchar('\n');
	}
    }
}
