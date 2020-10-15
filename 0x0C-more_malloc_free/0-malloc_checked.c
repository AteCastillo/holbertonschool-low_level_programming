#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: int received
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{

	void *s;

	s = malloc(b);
	if (s == NULL)
		exit (98);

	return (s);

}
