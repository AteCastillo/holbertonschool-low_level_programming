#include "holberton.h"

/**
 * _puts - prints a string to the stdout
 * @str: var received
 * Return: None.
 */

void _puts(char *str)
{

	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	putchar('\n');
}
