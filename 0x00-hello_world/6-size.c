#include <stdio.h>
/**
 * main - Prints out size of various types on the computer 
 * Return: void
 */

int main(void)
{
  int i;
  char c;
  float f;
  long l;
  long long ll;

  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
  printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
  printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
  return (0);
}
