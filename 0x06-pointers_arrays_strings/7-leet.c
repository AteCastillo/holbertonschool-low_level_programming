#include "holberton.h"


/**
 * leet - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */

char *leet(char *s)
{
	int n, x;

	char letras[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for(n = 0; s[n] != '\0'; n++)
	{
		for(x = 0; letras[x] != '\0'; x++)
		{
			if (letras[x] == s[n])
			{
				s[n] = num[x];
			}
		}
	}
	return (s);
}
