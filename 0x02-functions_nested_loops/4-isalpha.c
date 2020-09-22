#include "holberton.h"

/**
 * _isalpha - show what char is alphabetic
 * @c: the char received
 * Return: Always 0 (Success)
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
