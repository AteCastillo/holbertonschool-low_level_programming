#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - to execute an array
 * @array: array
 * @size: size of the array
 * @action: the function of action
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
