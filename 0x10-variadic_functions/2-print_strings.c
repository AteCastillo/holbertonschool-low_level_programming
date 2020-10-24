#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @separator: char
 * @n: int received
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list newlist;

	va_start(newlist, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(newlist, char *);

		if (s == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", s, separator);
	}
	s = va_arg(newlist, char *);
	if (s == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", s);
	va_end(newlist);
}
