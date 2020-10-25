#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
 * print_char - print
 * @s: char received
 * @newlist: list
 * Return: None
 */

void print_char(char *s, va_list newlist)
{
	printf("%s%c", s, va_arg(newlist, int));
}

/**
 * print_int - print int
 * @s: The operator
 * @newlist: list
 * Return: None
 */

void print_int(char *s, va_list newlist)
{
	printf("%s%i", s, va_arg(newlist, int));
}

/**
 * print_string - check the code for Holberton School students.
 * @s: string
 * @newlist: list
 * Return: None.
 */
void print_string(char *s, va_list newlist)

{
	char *string = va_arg(newlist, char *);

	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s%s", s, string);
}

/**
 * print_float - check the code for Holberton School students.
 * @s: float
 * @newlist: list
 * Return: None.
 */

void print_float(char *s, va_list newlist)
{
	printf("%s%f", s, va_arg(newlist, double));
}

/**
 * print_all - check the code for Holberton School students.
 * @format: constant
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	char *s = "";
	int i = 0;
	int j = 0;
	op_t new[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};

	va_list newlist;

	va_start(newlist, format);
	/*printf("fueradetodo"); */
	while (format && format[i])
	{
		/*printf("while1"); */
		while (j < 4)
		{
			/*printf("while2");*/
			if (format[i] == new[j].str[0])
			{
				/*printf("if1");*/
				new[j].f(s, newlist);
				{
					s = ", ";
					break;
				}
			}
			j++;
		}
		i++;
		j = 0;
	}
	va_end(newlist);
	printf("\n");

}
