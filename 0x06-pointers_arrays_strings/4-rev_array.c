#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)

{
	int i, temp, x;

	temp = 0;
	x = n - 1;
	for (i = 0; a[i] < x; i++)
	{
		temp = a[x];
		a[x] = a[i];
		a[i] = temp;
		x--;
	}
}
