#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: var received
 * @scr: var received
 * Return: Always 0.
 */


char *_strcat(char *dest, char *src)
{

	int n, temp;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}

	for (temp = 0; src[temp] != 0; temp++)
	{
	
		dest[n + temp] = src[temp];
		dest[n + temp] = '\0';
	}
	 
	return (dest);
}
