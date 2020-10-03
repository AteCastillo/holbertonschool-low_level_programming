#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: var received
 * @scr: var received
 * Return: Always 0.
 */


	char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}

	return (dest);
}
