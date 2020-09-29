#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int1 received
 * @b: int2 received
 * Return: None.
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
