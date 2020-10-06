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

	int row, column, sum1, sum2;

	for (row = 0, column = 0; row < size ; row++, column++)
        {
		sum1 += a[row][column];
	}

	for (column = size - 1, row = 0; row < size; row++, column--)
	{
		sum2 += a[row][column];
	}
	printf("%d, %d\n", sum1, sum2);

}
