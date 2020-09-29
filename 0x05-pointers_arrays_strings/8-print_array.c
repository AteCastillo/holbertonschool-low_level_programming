#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: var1 received
 * @n: var2 received
 * Return: none.
 */

void print_array(int *a, int n)
{

	int b; /*b= number of elements in an array */

	for (b = 0; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
