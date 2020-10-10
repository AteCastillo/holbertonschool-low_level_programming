#include "holberton.h"


/**
 * _strncat - concatenates two strings
 * @dest: char received
 * @src: char received
 * @n: var recived
 * Return: Always 0.
 */


char *_strncat(char *dest, char *src, int n)
{

	int lenght, i;

	for (lenght = 0; dest[lenght]; lenght++)
	{
	}

	for (i = 0; src[i]; i++)
	{
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[lenght + i] = src[i + 0];
	}
		dest[lenght + i] = '\0';
	/* ver Git de MS */
	return (dest);
}
