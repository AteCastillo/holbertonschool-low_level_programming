#include "holberton.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring
 * @s: pointer
 * @accept: char received
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n; /* i to count char s, n to count char accept */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
