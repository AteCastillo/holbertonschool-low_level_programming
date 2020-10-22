#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: pointer to fuction
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{

	if (f == NULL)
		return;

	(*f)(name);
}
