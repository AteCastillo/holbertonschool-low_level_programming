#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: char 1
 * @s2: char 2
 * @n: inte received
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j; /* to count every array */
	char *s;
	unsigned int x, y; /* to concatenate */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
	}
	s = malloc(sizeof(char) * (i + j) + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0; s1[x]; x++)
	{
		s[x] = s1[x];
	}
	for (y = 0; s2[y] && y < n; y++)
	{
		s[x + y] = s2[y];
	}
	s[x + y] = '\0'; /* to add null zero at the end manually */
	return (s);
}
