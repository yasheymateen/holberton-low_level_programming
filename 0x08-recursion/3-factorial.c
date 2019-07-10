#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: integer to get factorial
<<<<<<< HEAD
 * Return: -1 if error
=======
 * Return: -1 if error 
>>>>>>> bedb18e1f876079144833c9577380e38133842a4
 */

int factorial(int n)
{
<<<<<<< HEAD
if (n > 0)
return (n *= factorial(n - 1));
else if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n);
=======
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1)
	return (n * factorial(n - 1));
>>>>>>> bedb18e1f876079144833c9577380e38133842a4
}
