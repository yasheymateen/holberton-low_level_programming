#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @a: string to encode
 * Return: char string
 */

char *rot13(char *a)
{
	int x, j;

	char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (j = 0; rot[j] != '\0'; j++)
		{
			if (a[x] == rot[j])
			{
				a[x] = alphabet[j];
				break;
			}
		}
	}
	return (a);
}
