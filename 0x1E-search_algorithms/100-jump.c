#include "search_algos.h"
#include <math.h>

/**
* jump_search - search a value using jump
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to search for
* Return: the index of the value
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump, i = 0, j;

	jump = sqrt(size);

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] < value)
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
			continue;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			for (j = (i - jump); j <= i; j++)
			{
				printf("Value checked array [%ld]: [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
				if (array[j] > value)
					return (-1);
			}
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
	for (j = (i - jump); j < size; j++)
	{
		printf("Value checked array [%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			return (-1);
	}
	return (-1);
}
