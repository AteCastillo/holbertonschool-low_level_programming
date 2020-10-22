#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - check if the absolute value of a number is 98
 * @s: char to check
 *
 * Return: an int.
 */


int (*get_op_func(char *s))(int, int)
{
<<<<<<< HEAD
	op_t ops[] = {
=======
  op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;
  
>>>>>>> 991e1d1d7ecdf5962464b399b3d1a3a79ec569e9

		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)

	{

		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
