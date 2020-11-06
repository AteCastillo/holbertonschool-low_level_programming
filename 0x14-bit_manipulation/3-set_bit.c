#include "holberton.h"

/**
 * set_bit - check the code for Holberton School students.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8) /* a long int has 8 bytes,
						      this has to be multiplied
						      by 8 bites */
	      return (-1);

	*n = *n | (1 << index);
	return (1);
}
