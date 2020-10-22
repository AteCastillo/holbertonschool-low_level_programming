#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: size
 * @action: pointer to function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t n;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (n = 0; n < size; n++)
		(*action)(array[n]);
}
