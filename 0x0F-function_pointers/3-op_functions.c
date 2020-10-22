#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Struct op
 * @a: int1
 * @b: int2
 * Return: the operation
 */
int op_add(int a, int b)
{
	return (a + b);

}

/**
 * op_sub - Struct op
 * @a: int1
 * @b: int2
 * Return: the operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Struct op
 * @a: int1
 * @b: int2
 * Return: the operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Struct op
 * @a: int1
 * @b: int2
 * Return: the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
 * op_mod - Struct op
 * @a: int1
 * @b: int2
 * Return: the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);

}
