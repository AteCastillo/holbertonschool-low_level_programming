#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Struct op
 * @argc: counter
 * @argv: array
 * Return: int
 */


int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[3]);

	printf("%d\n", (*get_op_func(argv[2]))(num1, num2)); /*todo lo de get_op es el prototipo de la función*/
	return (0);
}
