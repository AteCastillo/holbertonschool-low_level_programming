#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - to creat an array
 * @c: char received
 * @size: the size of the memory to print
 *
 * Return: pointer.
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *s;

	s = (char *) malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
