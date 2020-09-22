#include "holberton.h"

/**
 * _isalpha to show a character when is in the alphabet
 * @c: the char received
 * Return: Always 0.
 */

int _isalpha(int c)

{

	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
