#include "holberton.h"
/**
 * _abs - function that computes absolute value of an integer
 * @a: integer 
 * Return: absolute value
 */

int _abs(int a)
{
if (a < 0)
a *= -1;
return (a);
}
