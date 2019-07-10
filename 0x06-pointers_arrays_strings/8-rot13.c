#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @a: string to encode
 * Return: char string
 */

char *rot13(char *a)
{
int i;

while (a[i] != '\0')
{
if ((a[i] >= 'a' && a[i] < 'n') || (a[i] >= 'A' && a[i] < 'N'))
{
a[i] = (a[i] + 13);
}
else
while ((a[i] > 'm' && a[i] <= 'z') || (a[i] > 'M' && a[i] <= 'Z'))
{
a[i] = (a[i] - 13);
}
i++;
}
return (a);
}
