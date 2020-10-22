#include <stdio.h>
#include "3-calc.h"

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
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
	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' ||
	    argv[2] != '/' || argv[2] != '%')
	{
		printf("Error\n");
		exit(100);
	}

	if ((argv[2] == / || argv[2] == %) && (argv[3] == 0))
	{
		printf("Error\n");
                exit(99);
	}

	printf("%d\n", (*get_op_func)((argv[2]), num1, num2);
}
