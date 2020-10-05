#include "holberton.h"

/**
 * int _strspn - a function that gets the length of a prefix substring
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, n, x = 0;

	for (i = 0; s[i] != 32; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				x++;
			/*	else */
			/*	break; */
			/*if it finds something different */
			/* it breaks the loop */
		}
	}
	return (x);
}
