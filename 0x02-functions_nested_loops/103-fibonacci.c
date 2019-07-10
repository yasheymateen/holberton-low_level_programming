#include <stdio.h>
/**
  * main - finds and prints the sum of even-valued terms
  * Return: void
  */

int main(void)
{
unsigned long counter, a, b, c, sum;

a = sum = 0;
b = 1;
for (counter = 0; counter < 50; counter++)
{
c = a + b;
a = b;
b = c;
if (c % 2 == 0 && c < 4000000)
{
sum += c;
}
}
printf("%lu\n", sum);
return (0);
}
