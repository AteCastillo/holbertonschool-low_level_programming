#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */


int **alloc_grid(int width, int height)
{
	int **array;
	int i; /* go through array height (rows) */
	int j, k; /* to inizialice each element*/

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(height * sizeof(int));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(width * sizeof(int));
		{
			if (array[i] == NULL)
			{
				for (i = -1; i > 0; i--)
				{
					free(array[i]);
				}
				free(array);
				return (NULL);
			}
		}

	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}

	return (array);
}
