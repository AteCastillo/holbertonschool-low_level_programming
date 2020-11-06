#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 * @n: unsigned int
 * @index: unsigned index
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;

	if (n & 1)


		return (1);

	else

		return (0);

}
