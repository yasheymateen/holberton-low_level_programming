#include <stdio.h>
#include "holberton.h"
/**
 * main - lists all natural numbers multiples of 3 or 5
 * Return: void
 */

int main(void)
{
int i, x;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
x += i;
}
printf("%d\n", x);
return (0);
}
