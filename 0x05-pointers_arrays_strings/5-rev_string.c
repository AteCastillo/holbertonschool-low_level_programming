#include "holberton.h"


/**
 * rev_string - a function that reverses a string
 * @s: void rev_string(char *s)
 * Return: None.
 */

void rev_string(char *s)
{
	int n, inicio, temp;

	for (n = 0; s[n] != 0; n++)
	{
	}
	n -= 1;

	for (inicio = 0; inicio <  n; inicio++)
	{
	temp = s[n];
	s[n] = s[inicio];
	s[inicio] = temp;
	n--;
	}



}
