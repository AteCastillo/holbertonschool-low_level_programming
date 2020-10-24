#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: unsigned int
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list newlist;

	va_start(newlist, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(newlist, int);
	}
	va_end(newlist);
	return (sum);




}
