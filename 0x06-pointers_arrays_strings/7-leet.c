#include "holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @a: string to encode
 * Return: character string
 */

char *leet(char *a)
{
int i, x;
char enc[] = "aAeEoOtTlL";
char num[] = "43071";

i = 0;
for (i = 0; a[i] != '\0'; i++)
{
for (x = 0; enc[x] != '\0'; x++)
if (a[i] == enc[x])
a[i] = num[x / 2];
}
return (a);
}
