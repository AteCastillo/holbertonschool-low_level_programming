#include "holberton.h"


/**
 * _strncpy - a function that copies a string.
 * @dest: var received
 * @src: var received
 * @n: var received
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] != '\0'; i++) /* not necesary */
	{
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++) /* to add the null */
		dest[i] = '\0';

	return (dest);
}
