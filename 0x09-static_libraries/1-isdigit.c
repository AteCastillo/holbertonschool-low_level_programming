#include "holberton.h"

/**
 * _isdigit - checks checks for a digit
 * @c: int received
 * Return: Always 0.
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
