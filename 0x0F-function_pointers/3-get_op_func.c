#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct
 * function to perform the operation
 *
 * @s: operator thats passed as arg
 *
 * Return: pointer of fnc
 */
int (*get_op_func(char *s))(int, int)
{
	int o;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[o].op)
	{
		if (strcmp(s, ops[o].op) == 0)
			return (ops[o].f);
		o++;
	}
	return (NULL);
}
