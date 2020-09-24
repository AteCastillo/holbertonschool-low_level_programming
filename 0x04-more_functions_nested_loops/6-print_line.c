#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: int received.
 * Return: None.
 */


void print_line(int n)
{
	int i; /* i is used for iteration */

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
