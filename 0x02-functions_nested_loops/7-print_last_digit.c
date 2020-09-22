#include "holberton.h"

/**
 * print_last_digit - to print last digit of a number
 * @n: int received
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (n > 0 && n < 0)
	{
	_putchar(lastd);
	}
	return (lastd);
}
