#include "holberton.h"


/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: var received
 * Return: string.
 */

char *string_toupper(char *s)

{

	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 97 && s[n] <= 122)
		{
			s[n] = s[n] - 32;
		}
	}
	return (s);
}
