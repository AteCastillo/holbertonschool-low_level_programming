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

	for (temp = 0; src[temp] != 0; temp++, n++)
	{
		dest[n] = src[temp];
	}
	dest[n] = '\0'; /*to add null zero */
	/* for (; src[i] != '\0'; n++)
	{
		dest[n] = src[n];
		}
	n++ 
	another way to do it but using the first for too
	*/
	return (dest);
}
