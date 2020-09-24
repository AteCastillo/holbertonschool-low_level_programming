#include "holberton.h"

/**
 * int_isupper - check for uppercase characters
 * @c: int received
 * Return: Always 0.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
