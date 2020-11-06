#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *) &i;

	if (*s)
		return (1);

	else
		return (0);

}
