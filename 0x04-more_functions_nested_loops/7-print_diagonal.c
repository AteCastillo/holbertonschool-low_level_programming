#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: int received
 * Return: None.
 */

void print_diagonal(int n)

{
	int i, linea;

	if (n > 0)
	{
		for (linea = 0; linea < n; linea++)
		{
			for (i = 0; i < linea; i++)
			{
				_putchar(' ');
			}
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}

	else
	{
		_putchar('\n');
	}
}
