#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument
 * @argv: array
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	multiplication = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiplication);
	return (0);
}
