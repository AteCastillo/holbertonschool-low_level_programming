#include "holberton.h"

/**
 * print_to_98 - print natural numbers to 98
 * @n: int received
 * Return: None.
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
	}
