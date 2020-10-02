#include "holberton.h"


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
	return(s);
}
