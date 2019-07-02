#include "holberton.h"
/**
*strlen - reverses a string.
*
* Return: void.
*/
int _strlen(char *s)
{
	int i = 0;
	int j = 0;
	while (s[j] != '\0')
	{
		++i;
		++j;
	}
	--i;
	return (i);
}

