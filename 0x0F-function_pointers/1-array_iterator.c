#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate in the array 
 * @array: array
 * @size: size of the array
 * @action: the function of action
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	
	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
