#include <stdio.h)
int main(void)
{
  unsigned long counter, a,b,c;
  a=0;
  b=1;
  for(counter=0; counter<50; counter++)
    {
      c=a+b;
      a=b;
      b=c;
      printf("%lu", c);
      if (counter==49)
	putchar('\n');
      else
	printf(", ");
    }
  return (0);
}
