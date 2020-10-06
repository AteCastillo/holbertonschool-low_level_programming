#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - a function that locates a character in a string
 * @a: pointer
 * @size: int received
 * Return:the pointer to char or 0 if dont have coincidence
 */

void print_diagsums(int *a, int size)

{

	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		sum1 += a[i];
	} /*definieron un puntero y hace que sea de una dimensión el array*/

	for (i = size - 1; i < size * size - 1; i = i + (size - 1))
	{ /*empieza de arriba hacia abajo */
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);

}
