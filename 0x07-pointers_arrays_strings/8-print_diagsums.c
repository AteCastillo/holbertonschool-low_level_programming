#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - a function that locates a character in a string
 * @a: pointer
 * @size: char received
 * Return:the pointer to char or 0 if dont have coincidence
 */

void print_diagsums(int *a, int size)

{
	int row, column, sum = 0 ;

/*	for (row = 0; a[row] < size ; row++)
 *        {
 *		for (column = 0; a[column]; column++)
 *		{
 *			if (row == column)
 *			{
 *				sum += a[row][column];
 *				printf("%d",sum);
 *			}
 *		}
 *	}
 *
 *	printf("\n");
 */
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);


}
