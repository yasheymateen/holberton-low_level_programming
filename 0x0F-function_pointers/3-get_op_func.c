#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - finds the right function to use
 * @s: pointer
 * Return: pointer to function to use
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
