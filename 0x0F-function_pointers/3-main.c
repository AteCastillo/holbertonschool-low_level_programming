#include <stdio.h>
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
<<<<<<< HEAD
	num2 = atoi(argv[3]);
=======
	if (argv[2][0] != '+' || argv[2][0] != '-' || argv[2][0] != '*' ||
	    argv[2][0] != '/' || argv[2][0] != '%')
	{
		printf("Error\n");
		exit(100);
	}

	if ((argv[2][0] == / || argv[2][0] == %) &&(argv[3] == 0))
	{
		printf("Error\n");
		exit(99);
	}
>>>>>>> 991e1d1d7ecdf5962464b399b3d1a3a79ec569e9

	printf("%d\n", (*get_op_func(argv[2])), (num1, num2);
}
