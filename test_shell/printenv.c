#include "holberton.h"
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */

int main(void)
{
	_printenv();
	return (0);
}

/**
 * _printenv - Print  the  values of the specified environment VARIABLE(s)
 *
 * Return: nothing
 */

void _printenv(void)
{
	extern char **environ;
	int i;
	size_t j;

	for (i = 0; environ[i] != 0; i++)
	{
		for (j = 0; environ[i][j] != 0; j++)
		{
		}
		write(1, environ[i], j);
		write(1, "\n", 1);
	}
}
