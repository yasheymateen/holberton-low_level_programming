#include <holberton.h>
void print_alphabet_x10(void)
{
  int i;
  char z;

  for (i='a'; i<10; i++)
    {
      for (z='a'; z<'z'; z++)
	{
	  _putchar(z);
	}
      _putchar('\n');
    }
}
