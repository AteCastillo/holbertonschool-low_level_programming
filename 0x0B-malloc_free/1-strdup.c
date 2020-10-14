#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: char received
 * Return: pointer.
 */

char *_strdup(char *str)

{
	int i, n;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++) /*to count the string and give */
					   /*  the number to malloc */
	s = (char *) malloc(i * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (n = 0;  n < i; n++)
	{
		s[n] = str[n];
	}
	return (s);
}
