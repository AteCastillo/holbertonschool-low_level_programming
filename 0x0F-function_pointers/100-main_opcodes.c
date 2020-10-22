#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: counter
 * @argv: arguments
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	unsigned char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int i = 0;

	while (i < (atoi(argv[1])))
	{
		printf("%02x ", p[i] - 1);
		i++;
	}

	printf("%02x\n", p[i]);
	return (0);
}
