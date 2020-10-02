#include "holberton.h"


/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: var received
 * Return: string.
 */

char *cap_string(char *s)

{
	int n, x;


	for (n = 0; s[n] != '\0'; n++)
	{
		x = n - 1;
		if ((s[n] >= 97 && s[n] <= 122) &&
		    (s[x] == 32 || s[x] == 33 ||
		     s[x] == 34 || s[x] == 9 ||
		     s[x] == 44 || s[x] == 40 ||
		     s[x] == 41 || s[x] == 123  || s[x] == 125 ||  s[x] ==46))
		{

			s[n] = s[n] - 32;
		}
	}
	return (s);
}
