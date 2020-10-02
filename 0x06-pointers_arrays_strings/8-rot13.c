#include "holberton.h"


/**
 * rot13 - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */

char *rot13(char *)
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

