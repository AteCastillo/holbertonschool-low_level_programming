#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @separator: char
 * @n: int
 * Return: Always 0.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list newlist;

	va_start(newlist, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator != NULL)
	{
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(newlist, int));
		else
		printf("%d%s", va_arg(newlist, int), separator);
	}
	printf("%d\n", va_arg(newlist, int));

	}
	va_end(newlist);

}
