#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - finds the right function to use
 * @s: pointer
 * Return: pointer to function to use
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a]; a++)
		;
	return (s1[a] - s2[a]);
}
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
		if (_strcmp(ops[i].op, s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
