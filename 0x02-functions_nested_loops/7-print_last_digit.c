#include "holberton.h"

/**
 * print_last_digit - to print last digit of a number
 * @n: int received
 * Return: last digit.
 */

int print_last_digit(int r)
{
	int lastd;

	lastd = r % 10;
	if (r <  0)
	{
		lastd = lastd * (-1);
	}
	_putchar ('0' + lastd);

	return (lastd);
}
