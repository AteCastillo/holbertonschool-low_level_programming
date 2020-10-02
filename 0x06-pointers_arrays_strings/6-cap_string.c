#include "holberton.h"


/**
 * cap_string - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int n, x;
	
	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	for (n = 0; s[n] != '\0'; n++)
	{
		x = n - 1;
		if ((s[n] >= 97 && s[n] <= 122) && (s[x] == 32 || s[x] == 33 || s[x] == 34 || s[x] == 9 ||  s[x] == 44 || s[x] == 40 || s[x] == 41 || s[x] == 123  || s[x] == 125 ||  s[x] ==46))
		{

			s[n] = s[n] - 32;
		}
	}
	return (s);
	
}
