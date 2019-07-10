#include "holberton.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @a: string to change
 * Return: changed string
 */

char *string_toupper(char *a)
{
int x;

x = 0;
while (a[x] != '\0')
{
if (a[x] >= 'a' && a[x] <= 'z')
a[x] -= 'a' - 'A';
x++;
}
return (a);
}
