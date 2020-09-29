#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: var received
 * Return: None.
 */

void print_rev(char *s)

{
	int n; /* n es hasta donde va la variable */

	while (*(s + n) != '\0')
	{
		n++;
			}
	s--;

	while (n > 0)
	{
		{
			_putchar(*(s+n));
		n--;
		}
	}
	_putchar('\n');
}
