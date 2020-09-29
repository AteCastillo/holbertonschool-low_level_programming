#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 *
 * Return: Always 0.
 */

int _strlen(char *s)

{

	int n; /*n is for *s to (s+n)*/

	while (*(s + n) != '\0')
	{
		n++;
		}
	return (n);
}
