#include "holberton.h"


/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{

	int i = 0; /* to count the chars */

	if (*s == '\0')
	{
		return (0);
	}

	i = _strlen_recursion(s + 1);
	i++;
	return (i);
}
