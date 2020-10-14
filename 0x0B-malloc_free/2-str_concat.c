#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: char 1
 * @s2: char 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{

	char *s;
	int i, n; /* to count every string */
	int j, k; /*vars to concatenate */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (n = 0; s2[n] != 0; n++)
	{
	}

	s = (char *) malloc((i + n) * sizeof(char) + 1);

	if (s == NULL)
		return (0);

	for (j = 0; s1[j] != '\0'; j++)
	{
		s[j] = s1[j];
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		s[j + k] = s2[k];
	}
	return (s);
}
