#include "holberton.h"


/**
 * leet - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */

char *leet(char *s)
{
	int n, x;
	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char abc2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for(n = 0; s[n] != '\0'; n++)
	{
		for(x = 0; abc[x] != '\0'; x++)
		{
			if (abc2[x] == s[n])
			{
				s[n] = abc2[x];
			}
		}
	}
	return (s);
}

