#include "holberton.h"

/**
 * _memset - a function that copies memory area.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: pointer s.
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i; /*convert everything to unsigned put unsigned first */



	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
