#include "holberton.h"

/**
 * print_square - prints a square
 * @size: int received
 * Return: None.
 */

void print_square(int size)

{
	int i, linea; /* linea represents the number of lines in the output */

	if (size > 0)
	{
		for (linea = 0; linea < size; linea++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
