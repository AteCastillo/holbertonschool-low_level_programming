#include "holberton.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: var received
 * @src: var received
 * Return: Always 0.
 */


char *_strcpy(char *dest, char *src)

{
	int n, i; /* n if for the lenght of the string, i for iteration */

	for (n = 0; src[n] != '\0'; n++)
	{
	}

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
