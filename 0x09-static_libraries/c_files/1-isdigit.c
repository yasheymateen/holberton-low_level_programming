#include "holberton.h"

/**
 *isdigit- checks if character is digit
 *@c: character to check for
 *
 *Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
  return (c >= '0' && c <= '9');
}
