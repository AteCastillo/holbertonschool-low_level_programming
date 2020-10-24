#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
 * print_char - print
 * @n: char received
 * Return: None
 */

void print_char(char n)

{
	printf("%c", n);
}

/**
 * print_int - print int
 * @n: The operator
 * Return: None
 */

void print_int(int n)

{
        printf("%i", n);
}


/**
 * print_string - check the code for Holberton School students.
 * @n: string
 * Return: None.
 */
void print_string(char *n)

{
        printf("%s", n);
}

/**
 * print_float - check the code for Holberton School students.
 * @n: float
 * Return: None.
 */

void print_float(float n)

{
        printf("%f", n);
}


/**
 * print_all - check the code for Holberton School students.
 * @char: char
 * @format: constant
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	char *s;
	int i;
	op_t new[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	}

	va_list newlist;
	va_start(newlist, 4)
		while (i = 0, i < 4;)





}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
